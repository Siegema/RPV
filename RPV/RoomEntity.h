#ifndef ROOMENTITY_H
#define ROOMENTITY_H

#include "Entity.h"
#include "Command.h"

class RoomEntity : public Entity
{
private: 

	//Holds location id [N,E,S,W]

	//Index
	int location;

public:
	//default
	int dir[(int)Direction::COUNT];

public:
	RoomEntity();
	RoomEntity(std::string name, std::string description,
		int location, int directions[4]);
	~RoomEntity();
};

#endif // !ROOMENTITY_H

