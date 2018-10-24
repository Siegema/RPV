#pragma once
#include <list>
#include "Component.h"

class GameObject
{
private:
	std::list<Component *> components;
	std::string name;

public:
	GameObject(std::string Name);
	~GameObject();

	void addComponent(Component* component) { components.emplace_back(component); }
	void removeComponent(Component* component);

	void update();

	void display(); 
};

