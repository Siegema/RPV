#include "Command.h"
#include  <iostream>
#include  <string>

char const * const Command::NounStrings[] = {
	"", //OFFset 
	"NORTH",
	"SOUTH",
	"EAST",
	"WEST"
};

Command::Command(std::string command)
{
	std::list<std::string> cmds;

	std::string word = "";

	for (auto it = command.begin(); it != command.end(); ++it)
	{ 
		if (*it == *" ")
		{
			cmds.push_back(word);
			word.clear();
		}
		else if (it + 1 == command.end())
		{ 
			word.push_back(*it);
			cmds.push_back(word);
		}

		word.push_back(*it);
	} 

	if (!isValid(cmds))
	{ 
		std::cout << " Invalid" << std::endl;
		return;
	} 

}

Command::~Command()
{
}

bool Command::isValid(Command cmd)
{ 

	return true;
}

bool Command::isValid(std::list<std::string> cmds)
{ 
		for (std::string s : cmds)
		{
			for (std::string noun : NounStrings)
			{
				if (s. == noun)
				{
					std::cout << "Noun Found: " << s << std::endl; 
				}
			}
		} 

		return true;
}

