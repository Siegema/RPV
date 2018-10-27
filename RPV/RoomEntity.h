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
	int dir[(int)Direction::COUNT] = {0, 0, 0, 0};

public:
	RoomEntity();
	~RoomEntity();
};

#endif // !ROOMENTITY_H

