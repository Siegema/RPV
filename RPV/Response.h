#pragma once

#include <iostream>
#include "Game.h"

class Game;

namespace Response
{
	template <typename T> void nptr(T *obj)
	{ 
		Game &g = *obj; 
		g.ChangeRoom(g.CurrentRoom.dir[(int)Direction::NORTH]); 
	}
};
