#include <iostream>
#include <string>
#include "Command.h"
#include "InputHandler.h"

void ParseCmds(std::istream& cmds)
{ 
//	char input[50];
//	cmds.getline(input, 50);
//	//std::cout << input << std::endl;
//
//	Command cmd(input);
}


int main()
{
	InputHandler::Instance().HandleInput(std::cin);
}
