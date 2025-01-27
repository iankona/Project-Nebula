#pragma once
#include <QObject>
#include <Scene/RiggedModel.h>
#include <Scene/StaticModel.h>
#include <Utility/ModelLoader.h>
#include <Utility/EngineCommon.h>

class Scene;

class ObjectManager : QObject
{
	Q_OBJECT

public:
	static ObjectManager* instance();

	void registerGameObject(const QString& name, GameObjectPtr go);

	GameObjectPtr getGameObject(const QString& name);
	void renameGameObject(const QString& oldName, const QString& newName);
	void renameGameObject(GameObjectPtr go, const QString& newName);

	// returns a list containing all the game objects, from parent to child order
	QList<GameObjectPtr> getGameObjectTreeList();

	GameObjectPtr createGameObject(const QString& customName, GameObject* parent = 0);

	void setLoadingFlag(const QString& flag);

	void renderAll(const float currentTime);

	void deleteObject(const QString& name);

	void clear();

	QMap<QString, GameObjectPtr> m_gameObjectMap;
	QVector<ModelLoaderPtr> m_modelLoaders;
	QVector<ComponentPtr> m_renderQueue;
	QString m_loadingFlag;
	QList<GameObject*> m_gameObjectTreeList;

public slots:
	void addComponentToRenderQueue(ComponentPtr comp);
	void removeComponentFromRenderQueue(ComponentPtr comp);

private:
	ObjectManager(QObject* parent = 0);
	~ObjectManager();
	static ObjectManager* m_instance;

	void readHierarchy(GameObject* root);
};

typedef QSharedPointer<ObjectManager> ObjectManagerPtr;
