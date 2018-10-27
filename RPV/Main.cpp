#include "Game.h"

int main()
{
	//InputHandler::Instance().HandleInput(std::cin);
	Game game;

	std::cout << "Hello\n" << std::endl;

	if (!game.Run()) {
		std::cerr << "***YUP something happened***" << std::endl;
		return 1;
	}

	std::cout << "Aurevoir" << std::endl;

	return 0;
}
