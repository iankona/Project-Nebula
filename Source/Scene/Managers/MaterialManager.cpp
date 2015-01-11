#include "MaterialManager.h"


MaterialManager::MaterialManager(GLuint programHandle)
{
	m_programHandle = programHandle;
}


MaterialManager::~MaterialManager(){}

MaterialPtr MaterialManager::getMaterial( const QString& name )
{
	if(m_materials.find(name) != m_materials.end()) return m_materials[name];
	else return MaterialPtr();
}

MaterialPtr MaterialManager::addMaterial(const QString& name, 
										const QVector4D& ambientColor,
										const QVector4D& diffuseColor,
										const QVector4D& specularColor,
										const QVector4D& emissiveColor,
										float shininess,
										float shininessStrength,
										int twoSided,
										int blendMode,
										bool alphaBlending,
										bool hasTexture)
{
	// if material is already in the map
	if (m_materials.find(name) != m_materials.end())
	{
		return m_materials[name];
	} 
	
	m_materials[name] = MaterialPtr(new Material(name, ambientColor, diffuseColor, specularColor, emissiveColor, shininess, shininessStrength, twoSided, blendMode, alphaBlending, hasTexture, m_programHandle));

	return m_materials[name];
}

void MaterialManager::clear()
{
	for (auto it = m_materials.begin(); it != m_materials.end(); )
	{
		m_materials.erase(it++);
	}

	m_materials.clear();
}