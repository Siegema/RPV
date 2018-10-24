#include "GameEngine.h"
#include "tinyxml2.h"
#include <iostream>

using namespace tinyxml2;


GameEngine::GameEngine()
{
}


GameEngine::~GameEngine()
{
	delete rSystem; 
	delete fsSystem; 
	delete inManager; 
	//delete assetManager; 
	delete gObjManager;

	rSystem = nullptr;
	fsSystem = nullptr;
	inManager = nullptr;
	assetManager = nullptr;
	gObjManager = nullptr;
}

void GameEngine::initialize()
{
	XMLDocument* doc = new XMLDocument();
	doc->LoadFile("../Assets/GameSettings.xml");
	if (doc->Error() != XML_SUCCESS)
	{
		std::cout << "Data File is NOT Loaded" << std::endl;
		delete doc;
		return;
	}

	XMLNode* rootNode = doc->FirstChildElement("GameSettings");

	XMLElement* gameSettingsElement = rootNode->FirstChildElement("GameEngine");
	XMLElement* defaultFileElement = gameSettingsElement->FirstChildElement("DefaultFile");


	XMLElement* RenderSettingsElement = gameSettingsElement->NextSiblingElement("RenderSystem");

	if (RenderSettingsElement != nullptr)
	{
		//		RenderSystem* rSystem = new RenderSystem();
		//		rSystem->initialize(RenderSettingsElement);
		rSystem = new RenderSystem();
		rSystem->initialize(RenderSettingsElement);
	}

	fsSystem = new FileSystem();
	fsSystem->initialize();

	inManager = new InputManager();
	inManager->initialize();

	//assetManager = new AssetManager();
	//assetManager->initialize();

	if (defaultFileElement != nullptr)
	{
		gObjManager = new GameObjectManager();
		gObjManager->initialize(defaultFileElement->GetText());
		std::cout << defaultFileElement->GetText() << std::endl;
	}

	delete doc;
}

void GameEngine::GameLoop()
{
	rSystem->update();

	fsSystem->update();

	inManager->update();

	//assetManager->update();

	gObjManager->update();
}

void GameEngine::display()
{
	rSystem->display();

	fsSystem->display();

	inManager->display();

	//assetManager->display();

	gObjManager->display();
}

