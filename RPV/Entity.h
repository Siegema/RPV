#ifndef ENTITY_H
#define ENTITY_H

#include <string>

class Entity
{
private: 
	const std::string name;
	const int id; 
	std::string desc; 

public:
	Entity(std::string Name, int ID, std::string description);
	~Entity();

	std::string getName() const { return name; }
};

#endif // !ENTITY_H
