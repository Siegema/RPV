#include "Player.h"
#include <iostream>
#include <algorithm>


Player::Player()
{
	for (int i = 0; i < 4; ++i)
	{
		ItemEntity* item = new ItemEntity(std::to_string(i), i, "");
		items.emplace_back(item);
	}
	items.emplace_back(new WeaponEntity("Excal", 2, "The Holy Sword"));
}

Player::~Player()
{
}

void Player::takeDamage(WeaponEntity* wep)
{
}

ItemEntity* Player::getItem(std::string item) const
{
	auto iter = std::find_if(items.begin(), items.end(),
		[item](ItemEntity *i) { return i->getName() == item; });

	if (iter != items.end())
	{
		return *iter;
	}

	return NULL;
}

void Player::getItemsNames()
{
	for (auto& i : items)
	{
		std::cout << i->getName() << std::endl;
	}
}

void Player::OnDeath()
{
}
