#include "AbstractCollider.h"
#include <Utility/ModelLoader.h>
#include <Scene/Scene.h>

AbstractCollider::AbstractCollider( const vec3& center, Scene* scene )
	: Component(0),
	  m_center(center),
	  m_scene(scene)
{
	init();
}

void AbstractCollider::init()
{
	Q_ASSERT(initializeOpenGLFunctions());

	m_renderingEffect = ShadingTechniquePtr(new ShadingTechnique("static_bounding_volume"));
	// the initial color is green, when it collides, it goes to red
	m_renderingEffect->setMatEmissiveColor(Qt::green);
}


void AbstractCollider::render( const float currentTime )
{
	m_renderingEffect->enable();

	mat4 modelMatrix = m_actor->getTranformMatrix() * m_transformMatrix;
	// do not scale, even when the game object is scaled
	vec3 scale = m_actor->scale();
	modelMatrix.scale(1.0f/scale.x(), 1.0f/scale.y(), 1.0f/scale.z());
	m_renderingEffect->setEyeWorldPos(m_scene->getCamera()->position());
	m_renderingEffect->setMVPMatrix(m_scene->getCamera()->viewProjectionMatrix() * modelMatrix);
	m_renderingEffect->setModelMatrix(modelMatrix); 
	m_renderingEffect->setViewMatrix(m_scene->getCamera()->viewMatrix());

	GLint oldCullFaceMode, oldPolygonMode;
	glGetIntegerv(GL_CULL_FACE_MODE, &oldCullFaceMode);
	glGetIntegerv(GL_POLYGON_MODE, &oldPolygonMode);

	glDisable(GL_CULL_FACE);
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

	for(int i = 0; i < m_meshes.size(); ++i)
	{
		drawElements(i);
	}

	glCullFace(oldCullFaceMode);        
	glPolygonMode(GL_FRONT_AND_BACK, oldPolygonMode);

}

void AbstractCollider::drawElements( uint index )
{
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
}

void AbstractCollider::setColor(const QColor& col)
{
	m_renderingEffect->enable();
	m_renderingEffect->setMatEmissiveColor(col);
}