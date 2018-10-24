#ifndef COMMANDS_H
#define COMMANDS_H

#include <list>

enum class Nouns 
{
	NORTH,
	EAST,
	SOUTH,
	WEST 
};

enum class Verbs 
{
};

class Commands
{
public:
	Commands(std::string);
	~Commands();

	Nouns noun;

	Verbs verb;
	
	bool isValid(Commands cmd);
	bool isValid(std::list<std::string> cmds);

private:

};


#endif // !COMMANDS_H

