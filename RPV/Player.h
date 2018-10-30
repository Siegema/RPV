#ifndef PLAYER_H
#define PLAYER_H
#include "ItemEntity.h"
#include "IDamageable.h"
#include <vector>
 
class Player : IDamageable
{ 
private: 
	std::vector<ItemEntity *> items;
	
public:
	Player();
	virtual ~Player();

	// Inherited via IDamageable
	virtual void takeDamage(WeaponEntity* wep) override;
	
	ItemEntity* getItem(std::string item) const;
	void getItemsNames(); 


public:
	void addToInventory(ItemEntity* item)
	{ 
		items.push_back(item);
	}
	std::vector<ItemEntity *> getItems() const { return items; }

	// Inherited via IDamageable
	virtual void OnDeath() override;
};

#endif // !PLAYER_H

