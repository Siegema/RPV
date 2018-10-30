#ifndef WEAPON_H
#define WEAPON_H

#include "IUsable.h"
#include "ItemEntity.h"

class WeaponEntity : public ItemEntity 
{
private: 
	const int damage = 10;

public:
	WeaponEntity(std::string name, int id, std::string desc);
	virtual ~WeaponEntity();

	// Inherited via IUsable
	virtual void Use() override;
	
	int Damage() const { return damage; }
};

#endif // !WEAPON_H
