#include "EnemyEntity.h"



EnemyEntity::EnemyEntity(std::string name, int id, std::string desc, int health)
	:Entity(name, id, desc)
	, hp(health)
{
}


EnemyEntity::~EnemyEntity()
{
}
