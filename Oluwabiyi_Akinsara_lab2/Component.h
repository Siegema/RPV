#pragma once
#include <string>
#include <iostream>

class Component
{
private:
	int id;
public:
	Component();
	~Component();

	void initialize(int ID);
	std::string& const getComponentId() { return (std::string&) std::to_string(id); }

	void update();
	void display();
};

