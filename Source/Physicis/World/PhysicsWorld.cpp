#include "PhysicsWorld.h"
#include "PhysicsWorldObject.inl"
#include <Physicis/Collision/Collider/BoxCollider.h>
#include <Physicis/Collision/Collider/SphereCollider.h>
#include <Physicis/Collision/Collider/ConvexHullCollider.h>
#include <Physicis/Collision/BroadPhase/BroadPhaseCollisionFeedback.h>
#include <Physicis/Collision/NarrowPhase/NarrowPhaseCollisionDetection.h>
#include <Physicis/Collision/NarrowPhase/GJKSolver.h>
#include <Physicis/Entity/RigidBody.h>
#include <Primitives/GameObject.h>
#include <Scene/IModel.h>
#include <Utility/Math.h>
#include <Utility/LoaderThread.h>
#include <Scene/Scene.h>

using namespace Math;

PhysicsWorld::PhysicsWorld(const PhysicsWorldConfig& config)
	: m_config(config),
	  m_locked(false)
{
}

PhysicsWorld::~PhysicsWorld()
{
}

PhysicsWorldConfig PhysicsWorld::getConfig() const
{
	return m_config;
}

void PhysicsWorld::start()
{
	foreach(PhysicsWorldObject* entity, m_entityList)
	{
		RigidBody* rb = dynamic_cast<RigidBody*>(entity);
		if(rb->getMotionType() != RigidBody::MOTION_FIXED)
		{
			rb->executeUserInput();
		}
	}
}

void PhysicsWorld::simulate(const float deltaTime)
{
	// don't update the physics world when it is locked
	if (m_locked)
	{
		return;
	}

	m_timeStep = deltaTime;

	// update the physics objects
	foreach(PhysicsWorldObject* entity, m_entityList)
	{
		RigidBody* rb = dynamic_cast<RigidBody*>(entity);
		//boarderCheck(rb);
		if(rb->getMotionType() != RigidBody::MOTION_FIXED)
		{
			rb->update(deltaTime);
		}
	}

	// handle the collision detection
	handleCollisions();
}

bool PhysicsWorld::isLocked()
{
	return m_locked;
}

void PhysicsWorld::lock()
{
	m_locked = true;
}

void PhysicsWorld::unlock()
{
	m_locked = false;
}

void PhysicsWorld::addEntity( PhysicsWorldObject* entity )
{
	bool lockState = m_locked;

	lock();
	// add the rigid body and its collider
	m_entityList << entity;
	addBroadPhaseCollider(dynamic_cast<RigidBody*>(entity)->getBroadPhaseCollider().data());
	entity->setWorld(this);

	// if the world is not locked before the operation
	// unlock it
	if(!lockState) unlock();
}

void PhysicsWorld::removeEntity( PhysicsWorldObject* entity )
{
	bool lockState = m_locked;

	lock();
	// remove the rigid body and its collider
	m_entityList.removeOne(entity);
	removeBroadPhaseCollider(dynamic_cast<RigidBody*>(entity)->getBroadPhaseCollider().data());

	// if the world is not locked before the operation
	// unlock it
	if(!lockState) unlock();
}

void PhysicsWorld::addBroadPhaseCollider( ICollider* collider )
{
	bool lockState = m_locked;

	lock();
	// add the rigid body and its collider, make sure it's unique
	foreach(ICollider* col, m_broadPhaseColliderList)
	{
		if (col == collider)
		{
			if(!lockState) unlock();
			return;
		}
	}
	m_broadPhaseColliderList << collider;
	
	// generate the collision pairs
	generateCollisionPairs();

	// if the world is not locked before the operation
	// unlock it
	if(!lockState) unlock();
}

void PhysicsWorld::removeBroadPhaseCollider( ICollider* collider )
{
	// remove it
	int idx = m_broadPhaseColliderList.indexOf(collider);
	if (idx > -1)
		m_broadPhaseColliderList.removeAt(idx);

	// generate the collision pairs again
	generateCollisionPairs();
}

void PhysicsWorld::generateCollisionPairs()
{
	m_broadPhaseCollisionPairs.clear();

	for (int i = 0; i < m_broadPhaseColliderList.size() - 1; ++i)
		for (int j = i + 1; j < m_broadPhaseColliderList.size(); ++j)
		{
			if (m_broadPhaseColliderList[i]->getRigidBody()->getMotionType() == RigidBody::MOTION_FIXED
				&& m_broadPhaseColliderList[j]->getRigidBody()->getMotionType() == RigidBody::MOTION_FIXED)
			{
				continue;
			}
			m_broadPhaseCollisionPairs << CollisionPairPtr(new CollisionPair(m_broadPhaseColliderList[i], m_broadPhaseColliderList[j]));
		}
}

int PhysicsWorld::entitiesCount()
{
	return m_entityList.count();
}

void PhysicsWorld::handleCollisions()
{
	foreach(CollisionPairPtr pair, m_broadPhaseCollisionPairs)
	{
		ICollider* cA = pair->pColliderA;
		ICollider* cB = pair->pColliderB;

		// collision detection on broad phase
		BroadPhaseCollisionFeedback broadPhaseResult = cA->onBroadPhase(cB);

		// if colliding on broad phase
		if (broadPhaseResult.isColliding())
		{
			// mark the bounding volume as red
			cA->increaseCollisionCount();
			cB->increaseCollisionCount();

			// go to narrow phase
			handleNarrowPhase(pair);
		}
	}

	// visual representation
	foreach(ICollider* col, m_broadPhaseColliderList)
	{
		if (col->getCollisionCount() > 0)
		{
			col->setColor(Qt::red);
		}
		else col->resetColor();

		col->resetCollisionCount();
	}
}

void PhysicsWorld::handleNarrowPhase( CollisionPairPtr pair )
{
	// get the two rigid bodies
	RigidBody* bodyA = pair->pColliderA->getRigidBody();
	RigidBody* bodyB = pair->pColliderB->getRigidBody();

	NarrowPhaseCollisionFeedback collisionInfo;
	GJKSolver solver;
	
	// if colliding on narrow phase
	if (solver.checkCollision(bodyA->getNarrowPhaseCollider().data(), bodyB->getNarrowPhaseCollider().data(), collisionInfo, false))
	{
		Transform trans1 = bodyA->getTransform();
		Transform trans2 = bodyB->getTransform();
		vec3 lv1 = bodyA->getLinearVelocity();
		vec3 lv2 = bodyB->getLinearVelocity();
		vec3 av1 = bodyA->getAngularVelocity();
		vec3 av2 = bodyB->getAngularVelocity();

		// find the exact Time of Impact (TOI) and back track each rigid body
  		NarrowPhaseCollisionFeedback newInfo;
   		newInfo = backToTimeOfImpact(bodyA, bodyB);
		if (newInfo.bIntersect) collisionInfo = newInfo;

// 		resetRigidBodyBeforeBackTrack(bodyA, trans1, lv1, av1);
// 		resetRigidBodyBeforeBackTrack(bodyB, trans2, lv2, av2);

		// check the contact time
		// if the difference is too small, means the contact point is the same, ignore it
		// only deal with the case when the contact point is not the same
		vec3 pointVelocityA = bodyA->getPointVelocityWorld(collisionInfo.closestPntAWorld);
		vec3 pointVelocityB = bodyB->getPointVelocityWorld(collisionInfo.closestPntBWorld);
		float Vrel = qAbs(vec3::dotProduct(collisionInfo.contactNormalWorld, pointVelocityA - pointVelocityB));
		float allowedTime = 0.8f - Vrel * 0.1f;

		qDebug() << allowedTime << collisionInfo.contactNormalWorld;
		if (m_currentTime - pair->contactTime > allowedTime)
		{
			// update the contact point in the pair
			pair->contactTime = m_currentTime;
			generalCollisionResponse(collisionInfo);
		}
	}
}

void PhysicsWorld::boarderCheck( RigidBody* rb )
{
	vec3 pos = rb->getPosition();
	if (pos.x() > 5)
	{
		rb->setLinearVelocity(Math::Vector3::reflect(rb->getLinearVelocity(), vec3(-1,0,0)));
		vec3 v = rb->getLinearVelocity();
		if (qAbs(v.x()) < 1.0f)
		{
			rb->setLinearVelocity(vec3( - 1.0f, v.y(), v.z()));
		}
	}
	if ( pos.x() < -5)
	{
		rb->setLinearVelocity(Math::Vector3::reflect(rb->getLinearVelocity(), vec3(1,0,0)));
		vec3 v = rb->getLinearVelocity();
		if (qAbs(v.x()) < 1.0f)
		{
			rb->setLinearVelocity(vec3(+ 1.0f, v.y(), v.z()));
		}
	}
	if (pos.y() > 10)
	{
		rb->setLinearVelocity(Math::Vector3::reflect(rb->getLinearVelocity(), vec3(0,-1,0)));
		vec3 v = rb->getLinearVelocity();
		if (qAbs(v.y()) < 1.0f)
		{
			rb->setLinearVelocity(vec3(v.x(), - 1.0f, v.z()));
		}
	}
	if ( pos.y() < 1)
	{
		rb->setLinearVelocity(Math::Vector3::reflect(rb->getLinearVelocity(), vec3(0,1,0)));
		vec3 v = rb->getLinearVelocity();
		if (qAbs(v.y()) < 1.0f)
		{
			rb->setLinearVelocity(vec3(v.x(), + 1.0f, v.z()));
		}
	}
	if (pos.z() > 5)
	{
		rb->setLinearVelocity(Math::Vector3::reflect(rb->getLinearVelocity(), vec3(0,0,-1)));
		vec3 v = rb->getLinearVelocity();
		if (qAbs(v.z()) < 1.0f)
		{
			rb->setLinearVelocity(vec3(v.x(), v.y(), - 1.0f));
		}
	}
	if ( pos.z() < -5)
	{
		rb->setLinearVelocity(Math::Vector3::reflect(rb->getLinearVelocity(), vec3(0,0,1)));
		vec3 v = rb->getLinearVelocity();
		if (qAbs(v.z()) < 1.0f)
		{
			rb->setLinearVelocity(vec3(v.x(), v.y(), 1.0f));
		}
	}
}

void PhysicsWorld::reset()
{
	lock();
	m_entityList.clear();
	m_broadPhaseColliderList.clear();
	m_broadPhaseCollisionPairs.clear();
}

NarrowPhaseCollisionFeedback PhysicsWorld::backToTimeOfImpact( RigidBody* rb1, RigidBody* rb2 )
{
	GJKSolver solver;
	NarrowPhaseCollisionFeedback collisionInfo;
	ColliderPtr collider1 = rb1->getNarrowPhaseCollider();
	ColliderPtr collider2 = rb2->getNarrowPhaseCollider();

	// store the current information of the rigid body
	Transform trans1 = rb1->getTransform();
	Transform trans2 = rb2->getTransform();
	vec3 lv1 = rb1->getLinearVelocity();
	vec3 lv2 = rb2->getLinearVelocity();
	vec3 av1 = rb1->getAngularVelocity();
	vec3 av2 = rb2->getAngularVelocity();

	bool modifyBody1 = rb1->getMotionType() == RigidBody::MOTION_FIXED ?
		               false : true;

	bool modifyBody2 = rb2->getMotionType() == RigidBody::MOTION_FIXED ?
					   false : true;

	// try to back track 2 and 1 time steps
	uint trySteps = 2;
	while(trySteps > 0)
	{
		if(modifyBody1) rb1->backTrack(trySteps * m_timeStep);
		if(modifyBody2) rb2->backTrack(trySteps * m_timeStep);
		if (solver.checkCollision(collider1.data(), collider2.data(), collisionInfo, false))
		{
			return collisionInfo;
		}
		else
		{
			// reset the rigid bodies
			resetRigidBodyBeforeBackTrack(rb1, trans1, lv1, av1);
			resetRigidBodyBeforeBackTrack(rb2, trans2, lv2, av2);
		}

		--trySteps;
	}
	

	// otherwise, the time of impact must be within 1 ~ 0 time steps
	// use a binary search
	int loopCount = 0;
	float epsilon = 0.001f;

	// loop until the penetration depth is at a satisfied level
	while(loopCount < 10)
	{
		++loopCount;
		float fraction = pow(0.5f, loopCount);

		// back track the rigid bodies for a certain duration
		// using the fraction
		if(modifyBody1) rb1->backTrack(fraction * m_timeStep);
		if(modifyBody2) rb2->backTrack(fraction * m_timeStep);

		// check penetration depth
		if (solver.checkCollision(collider1.data(), collider2.data(), collisionInfo, false) && collisionInfo.penetrationDepth < epsilon)
		{
			return collisionInfo;
		}
		else
		{
			// reset the rigid bodies
			resetRigidBodyBeforeBackTrack(rb1, trans1, lv1, av1);
			resetRigidBodyBeforeBackTrack(rb2, trans2, lv2, av2);
		}
	}

	// default behavioour
// 	if(modifyBody1) rb1->backTrack(1.5f * m_timeStep);
// 	if(modifyBody2) rb2->backTrack(1.5f * m_timeStep);
// 	solver.checkCollision(collider1.data(), collider2.data(), collisionInfo, false);

	return collisionInfo;
}

ImpulsePair PhysicsWorld::computeContactImpulseMagnitude( const NarrowPhaseCollisionFeedback& collisionInfo )
{
	RigidBody* A = collisionInfo.pObjA->getRigidBody();
	RigidBody* B = collisionInfo.pObjB->getRigidBody();

	vec3 n = collisionInfo.contactNormalWorld;

	vec3 pointVelocityA = A->getPointVelocityWorld(collisionInfo.closestPntAWorld);
	vec3 pointVelocityB = B->getPointVelocityWorld(collisionInfo.closestPntBWorld);
	float Vrel = vec3::dotProduct(n, pointVelocityA - pointVelocityB);

	// check if Vrel == 0
	if (qFuzzyIsNull(Vrel)) return ImpulsePair();

	float kA = -(1 + A->getRestitution());
	float kB = -(1 + B->getRestitution());

	float massInvA = A->getMotionType() == RigidBody::MOTION_FIXED ?
		             0.0f : A->getMassInv();
	float massInvB = B->getMotionType() == RigidBody::MOTION_FIXED ?
					 0.0f : B->getMassInv();

	float massInvSum = massInvA + massInvB;
	vec3 rA = collisionInfo.closestPntAWorld - A->getCenterOfMassInWorld();
	vec3 rB = collisionInfo.closestPntBWorld - B->getCenterOfMassInWorld();
	
	glm::mat3 IAInv = A->getInertiaInvWorld();
	glm::mat3 IBInv = B->getInertiaInvWorld();
	vec3 rACrossN = vec3::crossProduct(rA, n);
	vec3 rBCrossN = vec3::crossProduct(rB, n);

	float termA = A->getMotionType() == RigidBody::MOTION_FIXED ? 0.0f :
		          vec3::dotProduct(n, vec3::crossProduct(Converter::toQtVec3(IAInv * Converter::toGLMVec3(rACrossN)), rA));

	float termB = B->getMotionType() == RigidBody::MOTION_FIXED ? 0.0f :
				  vec3::dotProduct(n, vec3::crossProduct(Converter::toQtVec3(IBInv * Converter::toGLMVec3(rBCrossN)), rB));

	float denominator = massInvSum + termA + termB;
	
	ImpulsePair pair;
	pair.magnitudeA = qAbs(kA * Vrel / denominator);
	pair.magnitudeB = qAbs(kB * Vrel / denominator);

	return pair;
}

void PhysicsWorld::elasticCollisionResponse( RigidBody* rb1, RigidBody* rb2 )
{
	float m1 = rb1->getMass();
	float m2 = rb2->getMass();
	vec3 v1 = rb1->getLinearVelocity();
	vec3 v2 = rb2->getLinearVelocity();

	// Momentum Conservation Principle
	// in this case, the system does not lose kinematics energy
	vec3 v1Prime = v1*(m1-m2)/(m1+m2) + v2*(2*m2)/(m1+m2);
	vec3 v2Prime = v1*(2*m1)/(m1+m2) - v2*(m1-m2)/(m1+m2);

	rb1->setLinearVelocity(v1Prime);
	rb2->setLinearVelocity(v2Prime);
}

void PhysicsWorld::generalCollisionResponse( const NarrowPhaseCollisionFeedback& collisionInfo )
{
	RigidBody* bodyA = collisionInfo.pObjA->getRigidBody();
	RigidBody* bodyB = collisionInfo.pObjB->getRigidBody();
	vec3 n = collisionInfo.contactNormalWorld;

	ImpulsePair impuseMagnitudePair = computeContactImpulseMagnitude(collisionInfo);

	// apply impulse based on the direction
	if (bodyA->getMotionType() != RigidBody::MOTION_FIXED)
	{
// 		if (impuseMagnitudePair.magnitudeA < 0.2f/* && bodyA->getMotionEnergy() < 0.1f*/) 
// 			bodyA->setCanSleep();
// 		else
			bodyA->applyPointImpulse(-impuseMagnitudePair.magnitudeA * n, collisionInfo.closestPntAWorld);
	}

	if (bodyB->getMotionType() != RigidBody::MOTION_FIXED)
	{
// 		if (impuseMagnitudePair.magnitudeB < 0.2f/* && bodyB->getMotionEnergy() < 0.1f*/) 
// 			bodyB->setCanSleep();
// 		else
			bodyB->applyPointImpulse(impuseMagnitudePair.magnitudeB * n, collisionInfo.closestPntBWorld);
	}
}

void PhysicsWorld::resetRigidBodyBeforeBackTrack( RigidBody* body, const Transform& trans, const vec3& linearVelocity, const vec3& angularVelocity )
{
	body->setTransform(trans);
	body->setLinearVelocity(linearVelocity);
	body->setAngularVelocity(angularVelocity);
}
