#include "GameObjectManager.h"
#include "tinyxml2.h"

using namespace tinyxml2;

GameObjectManager::GameObjectManager()
{
}


GameObjectManager::~GameObjectManager()
{
	while (!gameObjects.empty()) {
		delete gameObjects.back();
		gameObjects.pop_back();
	}
}

void GameObjectManager::initialize(char const* fsPath)
{
	XMLDocument* doc = new XMLDocument();
	doc->LoadFile(fsPath);
	if (doc->Error() != XML_SUCCESS)
	{
		std::cout << "Data File is NOT Loaded" << std::endl;
		delete doc;
		return;
	}

	XMLNode* root = doc->FirstChildElement("GameObjectManager");

	if (root != nullptr) {

		//Search for all GameObjects node
		for (XMLElement* e = root->FirstChildElement("GameObjects");
			e != nullptr; e = e->NextSiblingElement("GameObjects"))
		{

			//Search for all GameObject node
			for (XMLElement* m = e->FirstChildElement("GameObject");
				m != nullptr; m = m->NextSiblingElement("GameObject"))
			{

				//Search for all Name node
				XMLElement* nameElement = m->FirstChildElement("name");
				GameObject* gObj = new GameObject(nameElement->GetText());


				for (XMLElement* j = m->FirstChildElement("Components");
					j != nullptr; j = j->NextSiblingElement("Components"))
				{


					for (XMLElement* i = j->FirstChildElement("Component");
						i != nullptr; i = i->NextSiblingElement("Component"))
					{
						XMLElement* nameElement = i->FirstChildElement("id");
						Component* component = new Component();
						component->initialize(std::stoi(nameElement->GetText()));

						gObj->addComponent(component);
					}
				}

				//Add object to list
				gameObjects.emplace_back(gObj);
			}
		}
	}

	delete doc;
}

void GameObjectManager::update()
{
	for (GameObject* gObj : gameObjects)
	{ 
		gObj->update();
	}
}

void GameObjectManager::removeGameObject(GameObject * component)
{
}

void GameObjectManager::display()
{
	for (GameObject* gObj : gameObjects)
	{ 
		gObj->display();
	}
}
