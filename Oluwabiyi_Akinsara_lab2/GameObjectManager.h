#pragma once
#include <list>
#include "GameObject.h"
#include "Component.h"
#include <iostream>

class GameObjectManager
{
private: 
	std::list<GameObject *> gameObjects;
	
public:
	GameObjectManager();
	~GameObjectManager();

	void initialize(char const * fsPath);
	void update();
	void addGameObject(GameObject* component) { gameObjects.emplace_back(component); }
	void removeGameObject(GameObject* component);

	void display(); 
};

