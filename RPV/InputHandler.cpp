#include "InputHandler.h"
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
		buffer = 0;

		auto wordEnd = (words.find_first_of(" ") < words.size())
			? words.find_first_of(" ") - 1 : words.size();
		auto range = wordEnd - buffer + 1;

		std::string word = words.substr(buffer, range);

		data.push_back(word);
		words.erase(buffer, range);
	}

	//only parse if something was typed
	if (data.size() > 0)
	{
		std::string s = data[0];
		if (mFunctions.find(s) != mFunctions.end())
		{
			data.erase(data.begin());
			mFunctions[s](game, data);
		}
	}
	else
	{ 
		std::cout << "No commands have been entered" << std::endl;
	}
}

InputHandler::InputHandler()
{
	mFunctions["NORTH"] = &nPtr;
	mFunctions["EAST"] = &ePtr;
	mFunctions["SOUTH"] = &sPtr;
	mFunctions["WEST"] = &wPtr;
	mFunctions["ATTACK"] = &AttackPtr;
	mFunctions["INVENTORY"] = &Inventory;
	mFunctions["TAKE"] = &Take;
}
