#include "Response.h"
#include "WeaponEntity.h"
#include "ItemEntity.h"

void nPtr(Game * obj, std::vector<std::string> data)
{
	Game &g = *obj;
	g.ChangeRoom(g.getCurrRoom()->dir[(int)Direction::NORTH]);
}

void ePtr(Game *obj, std::vector<std::string> data)
{
	Game &g = *obj;
	g.ChangeRoom(g.getCurrRoom()->dir[(int)Direction::EAST]);
}

void sPtr(Game *obj, std::vector<std::string> data)
{
	Game &g = *obj;
	g.ChangeRoom(g.getCurrRoom()->dir[(int)Direction::SOUTH]);
}

void wPtr(Game *obj, std::vector<std::string> data)
{
	Game &g = *obj;
	g.ChangeRoom(g.getCurrRoom()->dir[(int)Direction::WEST]);
}

void AttackPtr(Game *obj, std::vector<std::string> data)
{
	Game &g = *obj;
	if (data.size() > 0)
	{
		std::string targetName = nextWord(&data);

		if (g.getCurrRoom()->getEnemy() != NULL)
		{
			EnemyEntity* enemy = g.getCurrRoom()->getEnemy();

			if (enemy->getName() == targetName)
			{
				if (data.size() > 0)
				{
					std::string next = nextWord(&data);
					if (next == "WITH")
					{
						if (data.size() > 0)
						{
							std::string next = nextWord(&data);
							ItemEntity *item = g.getPlayer()->getItem(next);
							WeaponEntity *w = dynamic_cast<WeaponEntity *>(&*item);
							if(w)
							{
								enemy->takeDamage(w);
							}
							else
							{ 
								std::cout << "Weapon with the Name " + next + " Not Found" << std::endl;
							}
						}
					}
					else
					{
						std::cout << "Attack " << targetName << " With A.....? " << std::endl;
					}
				}
			}
			else
			{
				std::cout << "What's a " << targetName << std::endl;
			}
		}
	}
	else
	{
		std::cout << "Attack what ??? " << std::endl;
	}
}

void Inventory(Game *game, std::vector<std::string> data)
{ 
	game->getPlayer()->getItemsNames();
}

std::string nextWord(std::vector<std::string>* data)
{
	std::string s = *data->begin();
	data->erase(data->begin());
	return s;
}

void Take(Game *game, std::vector<std::string> data)
{ 
	if (data.size() > 0)
	{ 
		std::string	target = nextWord(&data);
 
		Player *p = game->getPlayer();

		ItemEntity* item = game->getCurrRoom()->getItem(target);
		if (item)
		{ 
			p->addToInventory(item);
			 game->getCurrRoom()->removeItem(target);
		}
		else
		{
			std::cout << "Item with the Name " + target + " Not Found" << std::endl;
		}
	}
}
