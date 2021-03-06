#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include <iostream>
#include <map>
#include <string>
#include <vector>
#include "Response.h"
#include "Game.h"

class Game;


class InputHandler
{
private:
	typedef void(*mFuncPtr)(Game*, std::vector<std::string>);

public:
	inline static InputHandler& Instance()
	{
		static InputHandler instance;
		return instance;
	} 

	void HandleInput(std::istream& input, Game* game);

private:
	std::map<std::string, mFuncPtr> mFunctions; 

private: 
	explicit InputHandler();

	inline ~InputHandler()
	{ 
	} 
};

#endif // !INPUTHANDLER_H
