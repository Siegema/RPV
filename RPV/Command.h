#ifndef COMMANDS_H
#define COMMANDS_H

#include <list>

enum class Noun
{
	NORTH,
	EAST,
	SOUTH,
	WEST 
};

enum class Verb 
{
};

class Command
{
public:
	Command(std::string);
	~Command();

	static char const * const NounStrings[];
	static char const * const VerbStrings[];

	Noun noun;

	Verb verb;

	std::string grm;

	
	bool isValid(Command cmd);
	bool isValid(std::list<std::string> cmds);

private:

};


#endif // !COMMANDS_H

