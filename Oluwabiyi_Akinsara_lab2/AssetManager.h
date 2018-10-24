#pragma once
#include "Asset.h"
#include "tinyxml2.h"
#include <list>
#include "ISystem.h"
#include "TextureAsset.h"

using namespace tinyxml2;

class AssetManager : public ISystem
{

private:
	std::list<Asset*> assets;
	static AssetManager* instance;

public:

	inline static AssetManager& Instance()
	{
	//	static AssetManager instance;
	//	return instance;
	}

	void AddAsset(Asset* component);
	void RemoveAsset(Asset* component);

	void load(XMLElement* element);

protected:
	int priority;

	void initialize();
	void update();

private:
	AssetManager();
	~AssetManager();

	inline explicit AssetManager(AssetManager&) 
	{ 
	}

	inline AssetManager& operator=(AssetManager&)
	{
		this;
	}

	void display();
};

