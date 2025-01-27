#include "TextureManager.h"
#include <QDebug>

TextureManager::TextureManager(QObject* parent) 
	: QObject(parent)
{}

TextureManager::~TextureManager() {}

TextureManager* TextureManager::m_instance = 0;

TextureManager* TextureManager::instance()
{
	static QMutex mutex;
	if (!m_instance) 
	{
		QMutexLocker locker(&mutex);
		if (!m_instance)
			m_instance = new TextureManager;
	}

	return m_instance;
}

TexturePtr TextureManager::getTexture( const QString& name )
{
	if(m_textures.find(name) != m_textures.end()) return m_textures[name];
	else return TexturePtr();
}

void TextureManager::deleteTexture( const QString& name )
{
	// if this texture exist
	auto it = m_textures.find(name);
	if(it != m_textures.end())
	{
		m_textures.erase(it);
	}
}

void TextureManager::deleteTexture( TexturePtr texture )
{
	m_textures.take(m_textures.key(texture));
}

TexturePtr TextureManager::addTexture( const QString& name, const QString& fileName, Texture::TextureType type, Texture::TextureUsage usage )
{
	// if texture is already in the map
	if (m_textures.find(name) != m_textures.end())
	{
		return m_textures[name];
	} 
	
	m_textures[name] = TexturePtr(new Texture(fileName, type, usage));

	return m_textures[name];
}

void TextureManager::clear()
{
	m_textures.clear();
}
