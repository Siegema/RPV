#pragma once
#include <string>

#include "tinyxml2.h"

using namespace tinyxml2;
class RenderSystem
{
private:
	std::string name;
	
	int width;
	int height;

	bool fullscreen; 

public:
	RenderSystem();
	~RenderSystem();

	void initialize(XMLElement * const renderNode);
	void update();

	void display();
};

