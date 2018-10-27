#include "InputHandler.h"
#include <vector>
#include <cctype>


void InputHandler::HandleInput(std::istream& input, Game* game)
{ 
	char commands[50];
	input.getline(commands, 50);

	std::string words = (std::string) commands; 

	std::vector<std::string> data;
 
	while (words.size() > 0)
	{
		auto buffer = words.find_first_not_of(" ");
		if (buffer == std::string::npos)
		{
			break;
		}
		words.erase(0, buffer);

		auto wordEnd = (words.find_first_of(" ") < words.size())
			? words.find_first_of(" ") : words.size();
		auto range = wordEnd - buffer + 1;

		std::string word = words.substr(buffer, range);

		data.push_back(word);
		words.erase(buffer, range);
	}

	for (std::string s : data)
	{
		if (mFunctions.find(s) != mFunctions.end())
		{
			mFunctions[s](game);
		}
	}
}

InputHandler::InputHandler()
{
	mFunctions["NORTH"] = &nptr;
}

std::string trim(std::string)
{ 
	return "";
}
