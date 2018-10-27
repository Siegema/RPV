#include "Game.h"

Game::Game()
{
}

bool Game::Run()
{
	Initialize();

	while (Running)
	{
		ProcessEvents();
		Update();
	}

//	//Stops from the program exiting too fast
//	std::cout << "*****PRES ANY CHARACTER TO EXIT*****" << std::endl;
//	char stall;
//	std::cin >> stall;

	Cleanup();

	return true;
}

void Game::Cleanup()
{ 
	if (room != nullptr)
	{ 
		delete room;
		room = nullptr;
	}
}

void Game::Initialize()
{
	room = new RoomEntity();


}

void Game::ProcessEvents()
{
	//TODO: Chnage Room IF needed
	//InputHandler::Instance().HandleInput(std::cin);
}

void Game::Update()
{
	InputHandler::Instance().HandleInput(std::cin, this);
}

void Game::ChangeRoom(int roomID)
{ 

	if (roomID != -1) 
	{ 
		std::cout << "Room Changing to room: "
			<< roomID << std::endl;
	}
	else
	{
		std::cout << "Ya Cant Go That Way!!" << std::endl;
	}
}

void Game::LoadLevels()
{ 
}

Game::~Game()
{
}

