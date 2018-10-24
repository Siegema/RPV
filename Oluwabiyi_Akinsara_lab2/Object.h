#pragma once
#include<string>

class Object
{
private:
	bool initialized;
	std::string name;

public:
	Object();
	~Object();

	bool isInitialize() { return initialized; }
	std::string getName() { return name; }
	void initialize();

	void display();
};

