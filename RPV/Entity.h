#ifndef ENTITY_H
#define ENTITY_H

#include <string>

class Entity
{
private:
	int id;
	std::string desc; 

public:
	Entity();
	~Entity();

	void setID(int ID) { id = ID; }
	void setDes(std::string DESC) { desc = DESC; }
};

#endif // !ENTITY_H
