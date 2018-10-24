#include <iostream>
#include "Command.h"
#include <string>
#include <map>

void ParseCmds(std::istream& cmds)
{ 
	char input[50];
	cmds.getline(input, 50);
	//std::cout << input << std::endl;

	Command cmd(input);
}

int main()
{
	void (*command)(std::istream&); 

	command = &ParseCmds;

	//initialize
	typedef void(*PF)();
	std::map<std::string, PF> defined_functions;
	defined_functions["foo"] = &foo;
	defined_functions["bar"] = &bar;
	//if defined, invoke it
	if (defined_functions.find("foo") != defined_functions.end())
	{
		defined_functions["foo"]();
	}
	//command(std::cin);
}

void foo()
{ 
}

void bar()
{ 
}