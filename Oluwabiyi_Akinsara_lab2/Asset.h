#pragma once
#include "tinyxml2.h"
using namespace tinyxml2;

class Asset
{
	friend class AssetManager;
protected:
	Asset();
	~Asset();

	virtual void load(XMLElement * element) = 0; 
};

