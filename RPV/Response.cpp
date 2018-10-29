#include "Response.h"

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
							std::cout << "Ya made it this far" << std::endl;
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

std::string nextWord(std::vector<std::string>* data)
{
	std::string s = *data->begin();
	data->erase(data->begin());
	return s;
}

