#ifndef RESPONSE_H
#define RESPONSE_H
 
#include <vector>
#include <iostream>
#include <string>
#include "Game.h"

class Game;

	//North
	void nPtr(Game *obj, std::vector<std::string> data);

	//East
	void ePtr(Game *obj, std::vector<std::string> data);

	//South
	void sPtr(Game *obj, std::vector<std::string> data);

	//West
	void wPtr(Game *obj, std::vector<std::string> data);

	//Attack
	void AttackPtr(Game *obj, std::vector<std::string> data);

	std::string nextWord(std::vector<std::string>* data);

#endif // !RESPONSE_H
