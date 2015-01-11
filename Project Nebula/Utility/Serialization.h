#pragma once
#include <QtCore>
#include <Scene/Scene.h>

/************************************************************************/
/*                           IO Streams                                 */
/************************************************************************/

/*
* Game Object
*/
// Order: Position -> Rotation -> Scaling
QDataStream& operator << (QDataStream& out, GameObject& object)
{
	out << object.position() << object.rotation() << object.scale();
	return out;
}

QDataStream& operator >> (QDataStream& in, GameObject& object)
{
	vec3 pos, rot, scale;
	in >> pos >> rot >> scale;

	object.setPosition(pos);
	object.setRotation(rot);
	object.setScale(scale);

	return in;
}

QDataStream& operator << (QDataStream& out, GameObject* object)
{
	out << object->position() << object->rotation() << object->scale();
	return out;
}

QDataStream& operator >> (QDataStream& in, GameObject* object)
{
	vec3 pos, rot, scale;
	in >> pos >> rot >> scale;

	object->setPosition(pos);
	object->setRotation(rot);
	object->setScale(scale);

	return in;
}

/*
* Model Manager
*/
// Order: Vector Size -> Each Pair(filename, gameobject)
QDataStream& operator << (QDataStream& out, QSharedPointer<ModelManager> object)
{
	int size = object->m_modelsInfo.size();
	out << size;

	for (int i = 0; i < size; ++i)
	{
		out << object->m_modelsInfo[i].first << object->m_modelsInfo[i].second;
	}
	
	return out;
}

QDataStream& operator >> (QDataStream& in, QSharedPointer<ModelManager> object)
{
	QVector<QPair<QString, GameObject*>> modelsInfoVector;

	int size;
	in >> size;

	QString fileName;

	object->m_modelsInfo.clear();

	for (int i = 0; i < size; ++i)
	{
		GameObject* go = new GameObject;
		in >> fileName >> go;

		object->m_modelsInfo.push_back(qMakePair(fileName, go));
	}
	
	return in;
}

/*
* Camera
*/
// Order: Position -> Up Vector -> View Center
QDataStream& operator << (QDataStream& out, Camera* object)
{
	out << object->position() << object->upVector() << object->viewCenter();

	return out;
}

QDataStream& operator >> (QDataStream& in, Camera* object)
{
	vec3 pos, up, center;

	in >> pos >> up >> center;

	object->setPosition(pos);
	object->setUpVector(up);
	object->setViewCenter(center);

	return in;
}

/*
* Scene
*/
// Order: Model Manager -> Camera
QDataStream& operator << (QDataStream& out, Scene* object)
{
	out << object->modelManager() << object->getCamera();

	return out;
}

QDataStream& operator >> (QDataStream& in, Scene* object)
{
	in >> object->modelManager() >> object->getCamera();

	return in;
}