#include "RiggedModel.h"
#include <Scene/Scene.h>
#include <Animation/Rig/Pose.h>

RiggedModel::RiggedModel(const QString& name, ModelLoaderPtr loader)
   : IModel(loader->getRenderingEffect(), name),
    m_modelLoader(loader),
    m_scene(Scene::instance()),
	m_skeleton(loader->getSkeletom()),
	m_FKController(0),
	m_IKSolver(0),
	m_hasAnimation(false),
	m_animationDuration(0.0f)
{
	initialize();
}

RiggedModel::RiggedModel(const QString& name, ModelLoaderPtr loader, QVector<ModelDataPtr> modelData)
  : IModel(loader->getRenderingEffect(), name),
    m_modelLoader(loader),
    m_scene(Scene::instance()),
	m_skeleton(loader->getSkeletom()),
	m_FKController(0),
	m_IKSolver(0),
	m_hasAnimation(false),
	m_animationDuration(0.0f)
{
	m_modelDataVector = modelData;
	initialize(modelData);
}

RiggedModel::RiggedModel( const RiggedModel* orignal )
{
	m_fileName = orignal->fileName();
	m_scene = Scene::instance();
	m_modelDataVector = orignal->getModelData();
	// copy the loader and skeleton
	m_modelLoader = orignal->getLoader();

	initialize(m_modelDataVector);

	// install shader
	QString shaderName = orignal->getShadingTech()->shaderFileName();
	m_renderingEffect = ShadingTechniquePtr(new ShadingTechnique(shaderName, ShadingTechnique::RIGGED));
	// copy the vao
	m_vao = orignal->getShadingTech()->getVAO();
	m_renderingEffect->setVAO(m_vao);

	// get the scale
	vec3 scale = orignal->getScale();

	// copy the bounding box
	BoxColliderPtr otherBox = orignal->getBoundingBox();
	vec3 halfExtents = otherBox->getHalfExtents();

	// reset the scale of the bounding box
	halfExtents.setX(halfExtents.x() / scale.x());
	halfExtents.setY(halfExtents.y() / scale.y());
	halfExtents.setZ(halfExtents.z() / scale.z());
	m_boundingBox  = BoxColliderPtr(new BoxCollider(otherBox->getPosition(), halfExtents));

	// copy the bounding sphere
	SphereColliderPtr otherSphere = orignal->getBoundingSphere();
	float radius = otherSphere->getRadius() / scale.x();
	m_boundingSpehre = SphereColliderPtr(new SphereCollider(otherSphere->getPosition(), radius));

	// copy the convex hull collider
	ConvexHullColliderPtr otherCH = orignal->getConvexHullCollider();
	ConvexShape shape = otherCH->getGeometryShape();
	m_convexHull = ConvexHullColliderPtr(new ConvexHullCollider(otherCH->getPosition(), shape));

	// assign the current bounding volume
	ColliderPtr currentBV = orignal->getCurrentBoundingVolume();
	if (currentBV.dynamicCast<BoxCollider>()) m_currentBoundingVolume = m_boundingBox;
	else if (currentBV.dynamicCast<SphereCollider>()) m_currentBoundingVolume = m_boundingSpehre;
	else if (currentBV.dynamicCast<ConvexHullCollider>()) m_currentBoundingVolume = m_convexHull;
}


RiggedModel::~RiggedModel() 
{
//  	SAFE_DELETE(m_skeleton);
//  	SAFE_DELETE(m_IKSolver);
// 	SAFE_DELETE(m_FKController);

	// clean up the meshes
	foreach(MeshPtr mesh, m_meshes)
	{
		m_meshManager->deleteMesh(mesh);
		mesh.clear();
	}

	// clean up the materials
	foreach(MaterialPtr mat, m_materials)
	{
		m_materialManager->deleteMaterial(mat);
		mat.clear();
	}
}

void RiggedModel::initialize(QVector<ModelDataPtr> modelDataVector)
{
	IModel::init();

	m_meshManager     = MeshManager::instance();
	m_textureManager  = TextureManager::instance();
	m_materialManager = MaterialManager::instance();

	// create a FKController for the model
	FKController* controller = new FKController(m_modelLoader, m_modelLoader->getSkeletom());
	setFKController(controller);
	setRootTranslation(controller->getRootTranslation());
	setRootRotation(controller->getRootRotation());

	// create an IKSolver for the model
	CCDIKSolver* solver = new CCDIKSolver(128);
	setIKSolver(solver);
	

	// traverse modelData vector
	for (int i = 0; i < modelDataVector.size(); ++i)
	{
		ModelDataPtr data = modelDataVector[i];

		// deal with the mesh
		MeshPtr mesh = m_meshManager->getMesh(data->meshData.name);
		if (!mesh)
		{
			mesh = m_meshManager->addMesh(data->meshData.name, data->meshData.numIndices, data->meshData.baseVertex, 	data->meshData.baseIndex);
		}

		m_meshes.push_back(mesh);

		// deal with the material
		// do not share the material
		MaterialPtr material(new Material(
			data->materialData.name,
			data->materialData.ambientColor,
			data->materialData.diffuseColor,
			data->materialData.specularColor,
			data->materialData.emissiveColor,
			data->materialData.shininess,
			data->materialData.shininessStrength,
			data->materialData.twoSided,
			data->materialData.blendMode,
			data->materialData.alphaBlending));

		m_materials.push_back(material);

		// deal with the texture
		TextureData td = data->materialData.textureData;
		if (!td.diffuseMap.isEmpty())
		{
			TexturePtr  texture_diffuseMap = m_textureManager->getTexture(td.diffuseMap);
			if(!texture_diffuseMap)
			{
				texture_diffuseMap = m_textureManager->addTexture(td.diffuseMap, td.diffuseMap);
			}
			material->addTexture(texture_diffuseMap);
		}
		if (!td.normalMap.isEmpty())
		{
			TexturePtr  texture_normalMap = m_textureManager->getTexture(td.normalMap);
			if(!texture_normalMap)
			{
				texture_normalMap = m_textureManager->addTexture(td.normalMap, td.normalMap, Texture::Texture2D, Texture::NormalMap);
			}
			material->addTexture(texture_normalMap);
		}

	}


// 	ikSolved = false;
// 	lastUpdatedTime = 0.0f;
// 	updateIKRate = 0.5f;
// 
// 	m_FABRSolver = new FABRIKSolver(m_skeleton, 0.1f);
// 	m_FABRSolver->enableIKChain("Bip01_L_UpperArm", "Bip01_L_Hand");
// 
// 
// 	// set bone DOFs
// 	Bone* pBone;
// 	Bone::AngleLimits pitchConstraint, yawConstraint, rollConstraint;
// 	Bone::DimensionOfFreedom dof;
// 	Math::EulerAngle ea;
// 	
// 
// 	pBone = m_skeleton->getBone("Bip01_L_Clavicle");
// 	ea = pBone->getEulerAnglesInModelSpace();
// 	pitchConstraint = Bone::AngleLimits(ea.m_fPitch, ea.m_fPitch);
// 	yawConstraint = Bone::AngleLimits(ea.m_fYaw - 20.0f, ea.m_fYaw + 20.0f);
// 	rollConstraint = Bone::AngleLimits(ea.m_fRoll - 20.0f, ea.m_fRoll + 20.0f);
// 	dof = Bone::DimensionOfFreedom(pitchConstraint, yawConstraint, rollConstraint);
// 	pBone->setDof(dof);
// 
// 	pBone = m_skeleton->getBone("Bip01_L_UpperArm");
// 	ea = pBone->getEulerAnglesInModelSpace();
// 	pitchConstraint = Bone::AngleLimits(ea.m_fPitch - 50.0f, ea.m_fPitch + 50.0f);
// 	yawConstraint = Bone::AngleLimits(ea.m_fYaw - 120.0f, ea.m_fYaw + 30.0f);
// 	rollConstraint = Bone::AngleLimits(ea.m_fRoll - 170.0f, ea.m_fRoll + 40.0f);
// 	dof = Bone::DimensionOfFreedom(pitchConstraint, yawConstraint, rollConstraint);
// 	pBone->setDof(dof);
// 	
// 	pBone = m_skeleton->getBone("Bip01_L_Forearm");
// 	ea = pBone->getEulerAnglesInModelSpace();
// 	pitchConstraint = Bone::AngleLimits(ea.m_fPitch - 5.0f, ea.m_fPitch + 120.0f);
// 	yawConstraint = Bone::AngleLimits(ea.m_fYaw - 60.0f, ea.m_fYaw + 20.0f);
// 	rollConstraint = Bone::AngleLimits(ea.m_fRoll, ea.m_fRoll);
// 	dof = Bone::DimensionOfFreedom(pitchConstraint, yawConstraint, rollConstraint);
// 	pBone->setDof(dof);
// 
// 	pBone = m_skeleton->getBone("Bip01_L_Hand");
// 	ea = pBone->getEulerAnglesInModelSpace();
// 	pitchConstraint = Bone::AngleLimits(ea.m_fPitch - 10.0f, ea.m_fPitch + 10.0f);
// 	yawConstraint = Bone::AngleLimits(ea.m_fYaw - 120.0f, ea.m_fYaw + 30.0f);
// 	rollConstraint = Bone::AngleLimits(ea.m_fRoll - 5.0f, ea.m_fRoll + 5.0f);
// 	dof = Bone::DimensionOfFreedom(pitchConstraint, yawConstraint, rollConstraint);
// 	pBone->setDof(dof);
// 
// 	pBone = m_skeleton->getBone("Bip01_L_Finger2");
// 	pitchConstraint = Bone::AngleLimits(ea.m_fPitch, ea.m_fPitch);
// 	yawConstraint = Bone::AngleLimits(ea.m_fYaw, ea.m_fYaw);
// 	rollConstraint = Bone::AngleLimits(ea.m_fRoll - 5.0f, ea.m_fRoll + 90.0f);
// 	dof = Bone::DimensionOfFreedom(pitchConstraint, yawConstraint, rollConstraint);
// 	pBone->setDof(dof);
// 
// 	pBone = m_skeleton->getBone("Bip01_L_Finger21");
// 	ea = pBone->getEulerAnglesInModelSpace();
// 	pitchConstraint = Bone::AngleLimits(ea.m_fPitch, ea.m_fPitch);
// 	yawConstraint = Bone::AngleLimits(ea.m_fYaw, ea.m_fYaw);
// 	rollConstraint = Bone::AngleLimits(ea.m_fRoll - 5.0f, ea.m_fRoll + 90.0f);
// 	dof = Bone::DimensionOfFreedom(pitchConstraint, yawConstraint, rollConstraint);
// 	pBone->setDof(dof);
// 
// 	solvingDuration= 1.0f;
}


void RiggedModel::render( const float currentTime )
{
	float dt = currentTime - lastUpdatedTime;
	lastUpdatedTime = currentTime;
	if(dt < 0)
	{
		dt = 0.0f;
	}
	//m_actor->translateInWorld(m_actor->globalSpeed() * dt); // this is for inplace locamotion
	
	m_renderingEffect->enable();

	m_transformMatrix = m_actor->getTransformMatrix();
	//m_transformMatrix.rotate(90, Math::Vector3::UNIT_X); // this is for dae files
	//QMatrix3x3 normalMatrix = modelViewMatrix.normalMatrix();

	m_renderingEffect->setCameraPosition(m_scene->getCamera()->position());
	m_renderingEffect->setMVPMatrix(m_scene->getCamera()->viewProjectionMatrix() * m_transformMatrix);
	m_renderingEffect->setModelMatrix(m_transformMatrix); 
	m_renderingEffect->setViewMatrix(m_scene->getCamera()->viewMatrix());

	// do the skeleton animation here
	// check if the model has animation first
	QVector<QMatrix4x4> Transforms;
	m_FKController->getBoneTransforms(currentTime, Transforms);

	/*
	// use IK
	// CCD
	// set constraint
	CCDIKSolver::IkConstraint constraint;
	constraint.m_startBone = m_skeleton->getBone("Bip01_L_Clavicle");
	constraint.m_endBone = m_skeleton->getBone("Bip01_L_Finger22");
	constraint.m_targetMS = m_targetPos;
	
	if (m_CCDSolver->solveOneConstraint( constraint, m_skeleton ))
	{
		m_FKController->disableBoneChain(m_skeleton->getBone("Bip01_L_Clavicle"));
		m_FKController->getBoneTransforms(time, Transforms);
		m_CCDSolver->getBoneTransforms(m_skeleton, constraint.m_startBone, Transforms);
	}
	else
	{
		m_FKController->enableAllBones();
		m_FKController->getBoneTransforms(time, Transforms);
	}
	*/

 	// update the bone positions
	for (int i = 0 ; i < Transforms.size() ; ++i) 
	{
		m_renderingEffect->setBoneTransform(i, Transforms[i]);
	}


	// draw each mesh
	for(int i = 0; i < m_meshes.size(); ++i)
	{
		// bind the material
		m_materials[i]->bind();

		// enable the material
		m_renderingEffect->setMaterial(m_materials[i].data());

		drawElements(i);
	}

}

void RiggedModel::setReachableTargetPos( vec3& pos )
{
	m_targetPos = pos;
}

void RiggedModel::setFKController( FKController* fkCtrl )
{
	m_FKController = fkCtrl;
}

void RiggedModel::setIKSolver( CCDIKSolver* ikSolver )
{
	m_IKSolver = ikSolver;
}
