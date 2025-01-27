#pragma once
#include <Primitives/MeshData.h>
#include <QtWidgets/QApplication>
#include <QtOpenGL/QGLWidget>
#include <QtCore/QTimer>
#include <QtCore/QElapsedTimer>
#include <QtOpenGL/QGLShaderProgram>
#include <QtGui/QMouseEvent>
#include <QtGui/QKeyEvent>
#include <QtGui/QWheelEvent>
#include <Utility/Camera.h>
#include <Primitives/Bone.h>
#include <Utility/MeshImporter.h>

class GLWindow : public QGLWidget
{
	Q_OBJECT
private:
	GLuint m_width;
	GLuint m_height;

	GLuint m_frameCount;

	QTimer* m_timer;
	QElapsedTimer* m_elaTimer;
	Camera m_camera;

	GLuint m_numVerts;
	GLuint m_numIndices;
	GLuint m_VertexArrayObjectID;

	void setupLights();
	void SendDataToOpenGL();
	void renderMesh(QGLShaderProgram &shader, MyMeshData &mesh, mat4 &modelToWorldMatrix);
	void renderBone(QGLShaderProgram &shader, MyMeshData &mesh);
	void renderSkinningModel(QGLShaderProgram &shader, MyMeshData &mesh);
	void renderSkinningModel(QGLShaderProgram &shader, MeshImporter* importer);
	void renderSkeleton(Bone* root);

	// TEST
	MeshImporter *m_importer;
	Bone *hand, *handModel;
	QVector<MyMeshData*> model_meshes;
	GLfloat handRotationAngle;
	int handRotationDirection;
	MyMeshData shape, shape2;
	QGLBuffer cylinderVertexBuffer, cylinderVertexBuffer2;
	QGLShaderProgram coloringShaderProgram, skinningShaderProgram, skinningShaderProgram2;
	GLuint m_boneLocation[100];

	// projection matrix
	mat4 pMatrix;
	// view matrix
	mat4 vMatrix;
	// model matrix
	mat4 mMatrix;

	// spot light
	QGLShaderProgram lightingShaderProgram;
	QGLBuffer lightVertexBuffer;
	int numSpotlightVertices;
	QGLBuffer spotlightBuffer;
	double lightAngle;
	mat3 normalMatrix;
	vec3 lightPosition;


private slots:
	void updateLoop();

protected:
	void initializeGL();
	void paintGL();
	void resizeGL(int w, int h);

	// use inputs
	void mousePressEvent(QMouseEvent *e);
	void mouseMoveEvent(QMouseEvent *e);
	void wheelEvent(QWheelEvent *e);
	void keyPressEvent(QKeyEvent * e);
	void checkKeyState(); // polish the movement for Windows
public:
	QSize sizeHint() const;
	void resizeToScreenCenter();
	GLWindow(QWidget *parent = 0);
	~GLWindow(void);
};
