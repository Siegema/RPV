#include "Commands.h"
#include  <iostream>
#include  <string>

Commands::Commands(std::string command)
{
	std::cout << command << std::endl;

	std::list<std::string> cmds;

	std::string word = "";

	for (int i = 0; i < command.size(); i++)
	{
		if (command[i] == *" ")
		{
			cmds.push_back(word);
			word.clear();
		}
		word.push_back(command.at(i));
		int ibreak = i;
	} 


}


Commands::~Commands()
{
}

bool Commands::isValid(Commands cmd)
{

	return true;
}

bool Commands::isValid(std::list<std::string> cmds)
{ 
}