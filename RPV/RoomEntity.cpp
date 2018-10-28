#include "RoomEntity.h"



RoomEntity::RoomEntity()
{
}

RoomEntity::RoomEntity(std::string name, std::string description, int location, int directions[4])
	:location(location)
{ 
	//setDes(description);
//	setID(location);
	std::copy(directions, directions + 4, dir);
}


RoomEntity::~RoomEntity()
{
}

