#pragma once
#include <iostream>

#include "RenderSystem.h"
#include "FileSystem.h"
#include "InputManager.h"
#include "AssetManager.h"
#include "GameObjectManager.h"

class GameEngine
{
private:

	RenderSystem* rSystem; 
	FileSystem* fsSystem; 
	InputManager* inManager; 
	AssetManager* assetManager; 
	GameObjectManager* gObjManager;

public:
	GameEngine();
	~GameEngine();

	void initialize();
	void GameLoop();

	void display();
};

