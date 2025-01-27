#include "IModel.h"
IModel::IModel(ShadingTechniquePtr tech, const QString& fileName) 
	: Component(0),
	  m_fileName(fileName),
	  m_renderingEffect(tech),
	  m_scale(Math::Vector3::UNIT_SCALE)
{
	if (tech)
	{
		m_vao = tech->getVAO();
	}

	init();

	setPolygonMode(Fill);
}

IModel::~IModel() {}

void IModel::init()
{
	Q_ASSERT(initializeOpenGLFunctions());
}

void IModel::drawElements( unsigned int index)
{

	GLint oldCullFaceMode, oldPolygonMode;
	glGetIntegerv(GL_CULL_FACE_MODE, &oldCullFaceMode);
	glGetIntegerv(GL_POLYGON_MODE, &oldPolygonMode);

	glDisable(GL_CULL_FACE);
	glPolygonMode(GL_FRONT_AND_BACK, m_polygonMode);

	glBindVertexArray(m_vao);

	glDrawElementsBaseVertex(
		GL_TRIANGLES,
		m_meshes[index]->getNumIndices(),
		GL_UNSIGNED_INT,
		reinterpret_cast<void*>((sizeof(unsigned int)) * m_meshes[index]->getBaseIndex()),
		m_meshes[index]->getBaseVertex()
		);

	// Make sure the VAO is not changed from the outside    
	glBindVertexArray(0);

	glCullFace(oldCullFaceMode);        
	glPolygonMode(GL_FRONT_AND_BACK, oldPolygonMode);
}

void IModel::setPolygonMode( PolygonMode mode )
{
	m_polygonMode = mode;
}

void IModel::setBoundingBox( BoxCollider* box )
{
	m_boundingBox.reset(box);
	m_currentBoundingVolume = m_boundingBox;
}

BoxColliderPtr IModel::getBoundingBox() const
{
	return m_boundingBox;
}

void IModel::setBoundingSphere( SphereCollider* sphere )
{
	m_boundingSpehre.reset(sphere);
	m_currentBoundingVolume = m_boundingSpehre;
}

SphereColliderPtr IModel::getBoundingSphere() const
{
	return m_boundingSpehre;
}

void IModel::setConvexHullCollider( ConvexHullCollider* ch )
{
 	m_convexHull.reset(ch);
	m_currentBoundingVolume = m_convexHull;
}

ConvexHullColliderPtr IModel::getConvexHullCollider() const
{
	return m_convexHull;
}

void IModel::showBoundingVolume()
{
	gameObject()->attachComponent(m_currentBoundingVolume);
}

void IModel::hideBoundingVolume()
{
	gameObject()->detachComponent(m_currentBoundingVolume);
}

void IModel::setCurrentBoundingVolume( ColliderPtr col )
{
	// update the visual representation
	hideBoundingVolume();

	// assign the given collider as the current bouding volume
	m_currentBoundingVolume = col;

	showBoundingVolume();
}

ColliderPtr IModel::getCurrentBoundingVolume() const
{
	return m_currentBoundingVolume;
}

void IModel::syncTransform( const Transform& transform )
{
	// sync the size of the box collider
	vec3 newScale = transform.getScale();
	if(newScale == m_scale) return;

	vec3 ratio(newScale.x() / m_scale.x(), newScale.y() / m_scale.y(), newScale.z() / m_scale.z());

	m_boundingBox->setScale(ratio);

	// find out which component effects the sphere
	for (int i = 0; i < 3; ++i)
	{
		if (newScale[i] != m_scale[i])
		{
			m_boundingSpehre->setScale(newScale[i]/m_scale[i]);
			break;
		}
	}

	// sync the size of the convex hull collider
	m_convexHull->setScale(ratio);
	m_scale = newScale;
}
