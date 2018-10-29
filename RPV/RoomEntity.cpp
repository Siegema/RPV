#include "RoomEntity.h"



RoomEntity::RoomEntity(std::string name, std::string description, int location, const int directions[4])
	:Entity(name, location, description)
	, location(location)
	, dir{*directions}
{ 
}


RoomEntity::~RoomEntity()
{
}

void RoomEntity::LoadEnemy(XMLElement *enemyNode)
{ 
	if (enemyNode != nullptr)
	{ 
		//TODO: create Enemy
	}
	//else do nothing
}

