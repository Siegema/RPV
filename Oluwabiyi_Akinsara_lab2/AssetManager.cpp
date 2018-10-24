#include "AssetManager.h"
#include <iostream>


AssetManager::AssetManager()
{
}


AssetManager::~AssetManager()
{
}

void AssetManager::AddAsset(Asset * component)
{
	if (component != nullptr)
	{
		assets.emplace_back(component);
	}
}

void AssetManager::RemoveAsset(Asset * component)
{
//	if (component != nullptr)
//	{
//		assets.remove(component);
//		auto iter = assets.begin();
//		for (iter; iter != assets.end(); iter++)
//		{
//			if ((*iter) == component)
//			{
//			}
//		}
//	}
}

void AssetManager::load(XMLElement * element)
{
	if (element != nullptr)
	{
		XMLElement *rootNode = element->FirstChildElement("Asset");
		std::string className = rootNode->Attribute("class");
		if (className == "TextureAsset")
		{ 

		}
	}
}

void AssetManager::initialize()
{
	std::cout << "Asset Manager: intialize" << std::endl;
}

void AssetManager::update()
{
	std::cout << "Asset Manager: intialize" << std::endl;
}

void AssetManager::display()
{
	std::cout << "Asset Manager Displayd?" << std::endl;
}
