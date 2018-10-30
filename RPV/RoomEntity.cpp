#include "RoomEntity.h"
#include <algorithm>



RoomEntity::RoomEntity(std::string name, std::string description, int location, const int directions[4])
	:Entity(name, location, description)
	, location(location)
	, dir{*directions}
{ 
	items.emplace_back(new WeaponEntity("Ignis", 2, "The Holy Sword"));
	items.emplace_back(new WeaponEntity("Ragnell", 2, "The Holy Sword"));
	items.emplace_back(new WeaponEntity("Shine", 2, "The Shiny Sword"));
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

ItemEntity* RoomEntity::getItem(std::string item) const
{
	auto iter = std::find_if(items.begin(), items.end(),
		[item](ItemEntity *i)
	{ 
		return i->getName() == item; 
	});
 

	if (iter != items.end())
	{
		return *iter;
	}

	return NULL;
}

void RoomEntity::removeItem(std::string item)
{
	auto iter = std::find_if(items.begin(), items.end(),
		[item](ItemEntity *i)
	{ 
		return i->getName() == item; 
	});
 
	if (iter != items.end())
	{
		items.erase(iter); 
	}

}
