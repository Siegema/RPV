#pragma once

#include <iostream>
#include "Game.h"

class Game;

namespace Response
{
	template <typename T> void nPtr(T *obj)
	{ 
		Game &g = *obj; 
		g.ChangeRoom(g.getCurrRoom()->dir[(int)Direction::NORTH]); 
	}

	template <typename T> void ePtr(T *obj)
	{ 
		Game &g = *obj; 
		g.ChangeRoom(g.getCurrRoom()->dir[(int)Direction::EAST]); 
	}

	template <typename T> void sPtr(T *obj)
	{ 
		Game &g = *obj; 
		g.ChangeRoom(g.getCurrRoom()->dir[(int)Direction::SOUTH]); 
	}


//	template <typename T> void wPtr(T *obj)
//	{ 
//		Game &g = *obj; 
//		g.ChangeRoom(g.getCurrRoom()->dir[(int)Direction::WEST]); 
//	}

};
