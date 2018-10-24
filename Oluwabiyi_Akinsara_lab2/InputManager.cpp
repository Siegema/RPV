#include "InputManager.h"
#include <iostream>



InputManager::InputManager()
{
}


InputManager::~InputManager()
{
}

void InputManager::initialize()
{
	std::cout << "Input Manager: intialized" << std::endl;
}

void InputManager::update()
{
	std::cout << "Input Manager: Updated" << std::endl;
}

void InputManager::display()
{
	std::cout << "Input Manager: Displayed" << std::endl;
}
