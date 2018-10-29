#ifndef ROOMENTITY_H
#define ROOMENTITY_H

#include "tinyxml2.h"
#include "Entity.h"
#include "EnemyEntity.h"
#include "Command.h"

using namespace tinyxml2;

class RoomEntity : public Entity
{
private: 

	//Index
	const int location;

	EnemyEntity* enemy = new EnemyEntity{"name", 1, "default enemy", 100};

public:

	//Holds location id [N,E,S,W]
	const int dir[(int)Direction::COUNT];

public:
	RoomEntity(std::string name, std::string description, int location, const int directions[4]);
	~RoomEntity();

	void LoadEnemy(XMLElement *enemyNode);
	//void LoadItems(XMLElement itemRootNode);

	EnemyEntity* getEnemy() const { return enemy; };
};

#endif // !ROOMENTITY_H

