#ifndef ENEMY_H
#define ENEMY_H
#include "Entity.h"
#include "WeaponEntity.h"
#include "IDamageable.h"

class EnemyEntity : public Entity, IDamageable 
{
private:
	int hp;
	//Item weapon;
	bool wasAttacked = false;

public:
	EnemyEntity(std::string name, int id, std::string desc, int health);
	virtual ~EnemyEntity();
	
	void Update();

	// Inherited via IDamageable
	virtual void takeDamage(WeaponEntity* wep) override;

	// Inherited via IDamageable
	virtual void OnDeath() override;
};

#endif // !ENEMY_H

