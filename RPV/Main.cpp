#include <iostream>
#include "Commands.h"

void ParseCmds(std::istream& cmds)
{ 
	char input[50];
	cmds.getline(input, 50);
	//std::cout << input << std::endl;

	Commands cmd(input);
}

int main()
{
	void (*command)(std::istream&); 

	command = &ParseCmds;
	
	command(std::cin);
}