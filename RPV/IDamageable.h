#ifndef IDAMAGABLE_H
#define IDAMAGABLE_H

#include "WeaponEntity.h"

class IDamageable
{
private:
	int hp;
 
public:
	IDamageable() {};
	virtual ~IDamageable() = default;
	virtual void takeDamage(WeaponEntity* wep) = 0;
	virtual void OnDeath() = 0;
};

#endif // !IDAMAGABLE_H

