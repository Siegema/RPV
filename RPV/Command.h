#ifndef COMMAND_H
#define COMMAND_H

#include <list>
#include "Execution.h"

enum class Noun
{
};

enum class Direction
{
	NORTH,
	EAST,
	SOUTH,
	WEST,
	COUNT
};

enum class Verb 
{
};

class Command
{
public:
	Command();
	Command(std::string);
	virtual ~Command();
	virtual void execute() = 0;

	static char const * const NounStrings[];
	static char const * const VerbStrings[];

	Noun noun;

	Verb verb;

	std::string grm;

	
	bool isValid(std::list<std::string> cmds);

private:

	friend Execution;
};


#endif // !COMMAND_H

