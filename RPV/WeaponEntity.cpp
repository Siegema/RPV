#include "WeaponEntity.h"


WeaponEntity::WeaponEntity(std::string name, int id, std::string desc)
	:ItemEntity(name, id, desc)
{
}


WeaponEntity::~WeaponEntity()
{
}

void WeaponEntity::Use()
{
	//Do Damage
	//Event use cutting rope???
}

