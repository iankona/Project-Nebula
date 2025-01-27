#include "LoaderThread.h"
#include <QFileDialog>
#include <Scene/Scene.h>
#include <Physicis/Collision/Collider/BoxCollider.h>
#include <Physicis/Collision/Collider/ConvexHullCollider.h>

LoaderThread::LoaderThread(const QString fileName, GameObjectPtr reference, bool generateGameObject)
	: QThread(Scene::instance()),
	  m_objectManager(ObjectManager::instance()),
	  m_fileName(fileName),
	  m_reference(reference),
	  m_shouldGenerateGameObject(generateGameObject)
{
	connect(this, SIGNAL(jobDone()), Scene::instance(), SLOT(modelLoaded()));
	run();
}

LoaderThread::~LoaderThread()
{
}

void LoaderThread::run()
{
	//QMutex mutex;
	//mutex.lock();

	if (!m_fileName.isEmpty())
	{
		// extract the file name
		int left = m_fileName.lastIndexOf("/");
		int right = m_fileName.lastIndexOf(".");
		QString customName = m_fileName.mid(left + 1, right - left - 1);

		// extract the relative path
		QDir dir;
		QString relativePath = dir.relativeFilePath(m_fileName);

		ModelPtr model = loadModel(customName, relativePath, m_shouldGenerateGameObject);
		if(!model)
		{
			quit();
			return;
		}
		// if not generating a game object for the model
		// let it attach to its reference object
		if (!m_shouldGenerateGameObject) m_reference->attachComponent(model);

		// apply transformation to this model
		if (m_reference)
		{
			model->gameObject()->setPosition(m_reference->position());
			model->gameObject()->setRotation(m_reference->rotation());
			model->gameObject()->setScale(m_reference->scale());
		}
	}

	//mutex.unlock();

	// emit the signal and destroy the thread
	emit jobDone();
	quit();
}

ModelPtr LoaderThread::loadModel( const QString& customName, const QString& fileName, bool generateGameObject /*= true*/ )
{
	ModelPtr pModel;

	// if the model already exists, make a copy
	foreach(ComponentPtr comp, m_objectManager->m_renderQueue)
	{
		ModelPtr model = comp.dynamicCast<IModel>();
		if (model && fileName == model->fileName())
		{
			pModel = model;
			break;
		}
	}
	if (pModel)
	{
		// check model type
		if (pModel.dynamicCast<StaticModel>())
		{
			StaticModel* original = dynamic_cast<StaticModel*>(pModel.data());
			StaticModel* copyModel = new StaticModel(original);
			pModel.reset(copyModel);
		}
		else if (pModel.dynamicCast<RiggedModel>())
		{
			RiggedModel* original = dynamic_cast<RiggedModel*>(pModel.data());
			RiggedModel* copyModel = new RiggedModel(original);
			pModel.reset(copyModel);
		}
	}
	// if the model doesn't exist, load it from file
	else
	{
		ModelLoaderPtr modelLoader(new ModelLoader);
		QVector<ModelDataPtr> modelDataArray = modelLoader->loadModel(fileName, 0, m_objectManager->m_loadingFlag);
		if(modelDataArray.size() == 0) return pModel;
		// create different types of models
		if (modelLoader->getModelType() == ModelLoader::STATIC_MODEL)
		{
			StaticModel* sm = new StaticModel(fileName, modelLoader->getRenderingEffect(), modelDataArray);
			pModel.reset(sm);
		}
		else if (modelLoader->getModelType() == ModelLoader::RIGGED_MODEL)
		{
			RiggedModel* rm = new RiggedModel(fileName, modelLoader, modelDataArray);
			pModel.reset(rm);
		}
		m_objectManager->m_modelLoaders.push_back(modelLoader);

		// assign the bounding volumes
		pModel->setConvexHullCollider(modelLoader->getConvexHullCollider());
		pModel->setBoundingSphere(modelLoader->getBoundingSphere());
		pModel->setBoundingBox(modelLoader->getBoundingBox());

		// CUDA stuff
		if (modelLoader->getModelType() != ModelLoader::COLLIDER)
		{
			pModel->setCudaVBO(modelLoader->getCudaVBO());
			pModel->setNumFaces(modelLoader->getNumFaces());
			pModel->setNumVertices(modelLoader->getNumVertices());
			pModel->setCudaTriangles(modelLoader->getCudaTriangles());
		}
	}

	if (generateGameObject)
	{
		// attach this model to a new game object
		GameObjectPtr go = ObjectManager::instance()->createGameObject(customName, Scene::instance()->sceneRoot());
		go->attachComponent(pModel);
	}

	return pModel;
}
