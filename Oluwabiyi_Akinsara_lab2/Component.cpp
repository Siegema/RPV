#include "Component.h"



Component::Component()
{
}


Component::~Component()
{
}

void Component::initialize(int ID)
{ 
	id = ID;
	std::cout << "Component: intialize with id " << id << std::endl;
}

void Component::update()
{
	std::cout << "Component: Updated" << std::endl;
}

void Component::display()
{	
	std::cout << "Component Displayed" << std::endl; 
}
