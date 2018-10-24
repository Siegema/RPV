#pragma once
#include "Asset.h"
#include "tinyxml2.h"

using namespace tinyxml2;
class TextureAsset : Asset
{
public:
	TextureAsset();
	~TextureAsset();

protected:
	void load(XMLElement * element);
};

