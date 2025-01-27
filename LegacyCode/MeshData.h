#pragma once
#include <Primitives/Vertex.h>
#include <Primitives/Texture.h>
#include <QtOpenGL/QGLBuffer>
struct MaterialInfo
{
	QString Name;
	vec3 Ambient;
	vec3 Diffuse;
	vec3 Specular;
	GLfloat Shininess;
	QVector<Texture*> textures;

	MaterialInfo(){textures.clear();}

};

struct LightInfo
{
	vec4 Position;
	vec3 Intensity;
};


class MyMeshData
{
public:
	QString meshName;
	Vertex* vertices;
	GLuint numVertices;
	GLushort* indices;
	GLuint numIndices;
	GLuint m_shaderProgramID;
	QGLBuffer vertexBuff;
	MaterialInfo* material;
	MyMeshData():vertices(0), numVertices(0), indices(0), numIndices(0)
	{
		material = new MaterialInfo();
	};

	void createVertexBuffer()
	{
		vertexBuff = QGLBuffer(QGLBuffer::VertexBuffer);
		vertexBuff.create();
		vertexBuff.bind();
		vertexBuff.setUsagePattern(QGLBuffer::DynamicDraw);
		vertexBuff.allocate(numVertices*sizeof(Vertex));
		vertexBuff.write(0, vertices, numVertices*sizeof(Vertex));
		vertexBuff.release();
	}

	void cleanUp()
	{
		delete material;
		delete [] vertices;
		delete [] indices;
		numVertices = 0;
		numIndices = 0;
	}
};


