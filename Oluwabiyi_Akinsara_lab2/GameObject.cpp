#include "GameObject.h"



GameObject::GameObject(std::string Name)
	:name(Name)
{
}


GameObject::~GameObject()
{
	while (!components.empty()) {
		delete components.back();
		components.pop_back();
	}
}

void GameObject::removeComponent(Component * component)
{
}

void GameObject::update()
{
	for (Component * comp : components)
	{ 
		comp->update();
	}
}

void GameObject::display()
{
	for (Component * comp : components)
	{ 
		comp->display();
	}
}
