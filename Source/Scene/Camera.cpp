#include "Camera.h"
using namespace Math;

Camera::Camera(GameObject* followingTarget, QObject *parent)
  : QObject(parent),
	m_position(Vector3::UNIT_Z),
	m_upVector(Vector3::UNIT_Y),
	m_viewCenter(Vector3::ZERO),
	m_cameraToCenter(Vector3::NEGATIVE_UNIT_Z),
	m_projectionType(Perspective),
	m_nearPlane(0.01f),
	m_farPlane(1000.0f),
	m_fieldOfView(60.0f),
	m_aspectRatio(1.0f),
	m_left(-100.0f),
	m_right(100.0f),
	m_bottom(-100.0f),
	m_top(100.0f),
	m_viewMatrixDirty(true),
	m_viewProjectionMatrixDirty(true),
	m_viewType(ThirdPerson),
	m_viewDirection(),
	m_viewCenterFixed(true),
	m_panAngle(0.0f),
	m_tiltAngle(0.0f),
	m_metersPerUnits(1.0f),
	m_isFollowing(true),
	m_followingTarget(followingTarget),
	m_speed(5.0f),
	m_sensitivity(0.2f)
{
	updatePerspectiveProjection();
}

Camera::~Camera()
{
}

void Camera::resetCamera()
{
	m_position = vec3(vec3(0.0f, 2.0f, 2.0f));
	m_upVector = vec3(Vector3::UNIT_Y);
	m_viewCenter = vec3(vec3(0.0f, 1.0f, 0.0f));
	m_cameraToCenter = m_viewCenter - m_position;

	m_viewMatrixDirty = true;
}

void Camera::updateOrthogonalProjection()
{
	m_projectionMatrix.setToIdentity();
	m_projectionMatrix.ortho(m_left, m_right, m_bottom, m_top, m_nearPlane, m_farPlane);
	m_viewProjectionMatrixDirty = true;
}

void Camera::setOrthographicProjection( float left, float right, float bottom, float top, float nearPlane, float farPlane )
{
	m_left = left;
	m_right = right;
	m_bottom = bottom;
	m_top = top;
	m_nearPlane = nearPlane;
	m_farPlane = farPlane;
	m_projectionType = Orthogonal;

	updateOrthogonalProjection();
}


void Camera::updatePerspectiveProjection()
{
	m_projectionMatrix.setToIdentity();
	m_projectionMatrix.perspective(m_fieldOfView, m_aspectRatio, m_nearPlane, m_farPlane);
	m_viewProjectionMatrixDirty = true;
}

void Camera::setPerspectiveProjection( float fieldOfView, float aspect, float nearPlane, float farPlane )
{
	m_fieldOfView = fieldOfView;
	m_aspectRatio = aspect;
	m_nearPlane = nearPlane;
	m_farPlane = farPlane;
	m_projectionType = Perspective;

	updatePerspectiveProjection();
}

Camera::ProjectionType Camera::projectionType() const
{
	return m_projectionType;
}

void Camera::setProjectionType(ProjectionType type)
{
	m_projectionType = type;
}

Camera::ViewType Camera::viewType() const
{
	return m_viewType;
}

void Camera::setViewType(ViewType type)
{
	m_viewType = type;
}

vec3 Camera::position() const
{
	return m_position;
}

void Camera::setPosition(const vec3& position)
{
	m_position = position;
	m_cameraToCenter = m_viewCenter - position;
	m_viewMatrixDirty = true;
}

void Camera::setUpVector(const vec3& upVector)
{
	m_upVector = upVector;
	m_viewMatrixDirty = true;
}

vec3 Camera::upVector() const
{
	return m_upVector;
}

void Camera::setViewCenter(const vec3& viewCenter)
{
	m_viewCenter = viewCenter;
	m_cameraToCenter = viewCenter - m_position;
	m_viewMatrixDirty = true;
}

vec3 Camera::viewCenter() const
{
	return m_viewCenter;
}

vec3 Camera::viewVector() const
{
	return m_cameraToCenter;
}

void Camera::setNearPlane(const float& nearPlane)
{
	if(qFuzzyCompare(m_nearPlane, nearPlane))
		return;

	m_nearPlane = nearPlane;

	if(m_projectionType == Perspective)
		updatePerspectiveProjection();
}

float Camera::nearPlane() const
{
	return m_nearPlane;
}

void Camera::setFarPlane(const float& farPlane)
{
	if(qFuzzyCompare(m_farPlane, farPlane))
		return;

	m_farPlane = farPlane;

	if(m_projectionType == Perspective)
		updatePerspectiveProjection();
}

float Camera::farPlane() const
{
	return m_farPlane;
}

void Camera::setFieldOfView(const float& fieldOfView)
{
	if(qFuzzyCompare(m_fieldOfView, fieldOfView))
		return;

	m_fieldOfView = fieldOfView;

	if(m_projectionType == Perspective)
		updatePerspectiveProjection();
}

float Camera::fieldOfView() const
{
	return m_fieldOfView;
}

void Camera::setAspectRatio(const float& aspectRatio)
{
	if(qFuzzyCompare(m_aspectRatio, aspectRatio))
		return;

	m_aspectRatio = aspectRatio;

	if(m_projectionType == Perspective)
		updatePerspectiveProjection();
}

float Camera::aspectRatio() const
{
	return m_aspectRatio;
}

void Camera::setLeft(const float& left)
{
	if(qFuzzyCompare(m_left, left))
		return;

	m_left = left;

	if(m_projectionType == Orthogonal)
		updateOrthogonalProjection();
}

float Camera::left() const
{
	return m_left;
}

void Camera::setRight(const float& right)
{
	if(qFuzzyCompare(m_right, right))
		return;

	m_right = right;

	if(m_projectionType == Orthogonal)
		updateOrthogonalProjection();
}

float Camera::right() const
{
	return m_right;
}

void Camera::setBottom(const float& bottom)
{
	if(qFuzzyCompare(m_bottom, bottom))
		return;

	m_bottom = bottom;

	if(m_projectionType == Orthogonal)
		updateOrthogonalProjection();
}

float Camera::bottom() const
{
	return m_bottom;
}

void Camera::setTop(const float& top)
{
	if (qFuzzyCompare(m_top, top))
		return;

	m_top = top;

	if(m_projectionType == Orthogonal)
		updateOrthogonalProjection();
}

float Camera::top() const
{
	return m_top;
}

mat4 Camera::viewMatrix() const
{
	if(m_viewMatrixDirty)
	{
		m_viewMatrix.setToIdentity();
		m_viewMatrix.lookAt(m_position, m_viewCenter, m_upVector);
		m_viewMatrixDirty = false;
	}

	return m_viewMatrix;
}

mat4 Camera::projectionMatrix() const
{
	return m_projectionMatrix;
}

mat4 Camera::viewProjectionMatrix() const
{
	if(m_viewMatrixDirty || m_viewProjectionMatrixDirty)
	{
		m_viewProjectionMatrix = m_projectionMatrix * viewMatrix();
		m_viewProjectionMatrixDirty = false;
	}

	return m_viewProjectionMatrix;
}

void Camera::translate(const vec3& vLocal, CameraTranslationOption option)
{
	// Calculate the amount to move by in world coordinates
	vec3 vWorld;

	if( ! qFuzzyIsNull(vLocal.x()) )
	{
		// Calculate the vector for the local x axis
		vec3 x = vec3::crossProduct(m_cameraToCenter, m_upVector).normalized();
		vWorld += vLocal.x() * x;
	}

	if( ! qFuzzyIsNull( vLocal.y()) )
		vWorld += vLocal.y() * m_upVector;

	if( ! qFuzzyIsNull( vLocal.z()) )
		vWorld += vLocal.z() * m_cameraToCenter.normalized();

	// Update the camera position using the calculated world vector
	m_position += vWorld;

	// May be also update the view center coordinates
	if(option == TranslateViewCenter)
		m_viewCenter += vWorld;

	// Refresh the camera -> view center vector
	m_cameraToCenter = m_viewCenter - m_position;

	// Calculate a new up vector. We do this by:
	// 1) Calculate a new local x-direction vector from the cross product of the new
	//    camera to view center vector and the old up vector.
	// 2) The local x vector is the normal to the plane in which the new up vector
	//    must lay. So we can take the cross product of this normal and the new
	//    x vector. The new normal vector forms the last part of the orthonormal basis
	vec3 x = vec3::crossProduct(m_cameraToCenter, m_upVector).normalized();
	m_upVector = vec3::crossProduct(x, m_cameraToCenter).normalized();

	m_viewMatrixDirty = true;
}

void Camera::translateWorld(const vec3& vWorld , CameraTranslationOption option)
{
	// Update the camera position using the calculated world vector
	m_position += vWorld;

	// May be also update the view center coordinates
	if (option == TranslateViewCenter)
		m_viewCenter += vWorld;

	// Refresh the camera -> view center vector
	m_cameraToCenter = m_viewCenter - m_position;

	m_viewMatrixDirty = true;
}

quat Camera::tiltRotation(const float& angle) const
{
	vec3 xBasis = vec3::crossProduct(m_upVector, m_cameraToCenter.normalized()).normalized();

	return quat::fromAxisAndAngle(xBasis, -angle);
}

quat Camera::panRotation(const float& angle) const
{
	return quat::fromAxisAndAngle(m_upVector, angle);
}

quat Camera::panRotation(const float& angle, const vec3& axis) const
{
	return quat::fromAxisAndAngle(axis, angle);
}

quat Camera::rollRotation(const float& angle) const
{
	return quat::fromAxisAndAngle(m_cameraToCenter, -angle);
}

void Camera::tilt(const float& angle)
{
	quat q = tiltRotation(angle);
	rotate(q);
}

void Camera::pan(const float& angle)
{
	quat q = panRotation(-angle);
	rotate(q);
}

void Camera::pan(const float& angle, const vec3& axis)
{
	quat q = panRotation(-angle, axis);
	rotate(q);
}

void Camera::roll(const float& angle)
{
	quat q = rollRotation(-angle);
	rotate(q);
}

void Camera::tiltAboutViewCenter(const float& angle)
{
	quat q = tiltRotation(-angle);
	rotateAboutViewCenter(q);
}

void Camera::panAboutViewCenter(const float& angle)
{
	quat q = panRotation(angle, Math::Vector3::UNIT_Y);
	rotateAboutViewCenter(q);
}

void Camera::rollAboutViewCenter(const float& angle)
{
	quat q = rollRotation(angle);
	rotateAboutViewCenter(q);
}

void Camera::rotate(const quat& q)
{
	m_upVector = q.rotatedVector(m_upVector);
	m_cameraToCenter = q.rotatedVector(m_cameraToCenter);
	m_viewCenter = m_position + m_cameraToCenter;

	m_viewMatrixDirty = true;
}

void Camera::rotateAboutViewCenter(const quat& q)
{
	m_upVector = q.rotatedVector(m_upVector);
	m_cameraToCenter = q.rotatedVector(m_cameraToCenter);
	m_position = m_viewCenter - m_cameraToCenter;

	m_viewMatrixDirty = true;
}

void Camera::followTarget( GameObject* target )
{
	m_viewCenterFixed = true;
	m_isFollowing = true;
	m_followingTarget = target;
	if (target)
	{
		m_viewCenter = target->position();
	}

	m_viewType = ThirdPerson;
}

void Camera::releaseTarget()
{
	m_viewCenterFixed = false;
	m_isFollowing = false;

	m_viewType = FirstPerson;
}

void Camera::update( const float dt )
{
	Camera::CameraTranslationOption option = m_viewCenterFixed
		? Camera::DontTranslateViewCenter
		: Camera::TranslateViewCenter;

	if (m_isFollowing)
	{
		//m_viewCenter = m_followingTarget->predictedPosition();
		// apply an offset on Y, because we don't want to look at the character's feet
		//m_viewCenter.setY(m_viewCenter.y() + 100.0f);
		if( ! qFuzzyIsNull(m_panAngle) )
		{
			panAboutViewCenter(m_panAngle);
			m_panAngle = 0.0f;
		}

		if ( ! qFuzzyIsNull(m_tiltAngle) )
		{
			tiltAboutViewCenter(m_tiltAngle);
			m_tiltAngle = 0.0f;
		}
		translate(m_viewDirection * dt * m_metersPerUnits, option);
		if(m_followingTarget) translateWorld(m_followingTarget->globalSpeed() * dt, option);
	}
	else
	{
		if( ! qFuzzyIsNull(m_panAngle) )
		{
			pan(m_panAngle, vec3(0.0f, 1.0f, 0.0f));
			m_panAngle = 0.0f;
		}

		if ( ! qFuzzyIsNull(m_tiltAngle) )
		{
			tilt(m_tiltAngle);
			m_tiltAngle = 0.0f;
		}
		translate(m_viewDirection * dt * m_metersPerUnits, option);
	}

}

void Camera::switchToFirstPersonCamera( bool status )
{
	if (status) releaseTarget();
	else followTarget(m_followingTarget);
}

void Camera::switchToThirdPersonCamera( bool status )
{
	if (status) followTarget(m_followingTarget);
	else releaseTarget();
}

void Camera::smoothTransform( const vec3& targetPos, float duration /*= 0.5*/ )
{
	vec3 to = targetPos - m_position;
	float dis = to.length();
	vec3 dir = to.normalized();

	vec3 speed = to/duration;
}

float Camera::speed() const
{
	return m_speed;
}

float Camera::sensitivity() const
{
	return m_sensitivity;
}

void Camera::setSpeed( float val )
{
	m_speed = val;
}

void Camera::setSensitivity( float val )
{
	m_sensitivity = val;
}
