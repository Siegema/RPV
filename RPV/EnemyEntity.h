#ifndef ENEMY_H
#define ENEMY_H
#include "Entity.h"

class EnemyEntity : public Entity
{
private:
	int hp;
	//Item weapon;

public:
	EnemyEntity(std::string name, int id, std::string desc, int health);
	~EnemyEntity();
};

#endif // !ENEMY_H

