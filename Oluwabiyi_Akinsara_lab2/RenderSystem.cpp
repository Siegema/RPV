#include "RenderSystem.h"
#include <iostream>



RenderSystem::RenderSystem()
{
}


RenderSystem::~RenderSystem()
{
}

void RenderSystem::initialize(XMLElement * const renderNode)
{
	if (renderNode != nullptr) {
		XMLElement* nameNode = renderNode->FirstChildElement("Name");
		name = nameNode->GetText();

		XMLElement* windowSizeElement = nameNode->NextSiblingElement("WindowSize");
		height = windowSizeElement->IntAttribute("height");
		width = windowSizeElement->IntAttribute("width");
		fullscreen = windowSizeElement->BoolAttribute("fullscreen");

		std::cout << name << std::endl;
		std::cout << height << std::endl;
		std::cout << width << std::endl;
	}
}

void RenderSystem::update()
{
	std::cout << "Render System: Updated" << std::endl;
}

void RenderSystem::display()
{
	std::cout << "Render System: Display" << std::endl;
}
