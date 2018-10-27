#ifndef GAME_H
#define GAME_H

#include<iostream>
#include <list>
#include <string>
#include "tinyxml2.h"
#include "Command.h"
#include "InputHandler.h"
#include "RoomEntity.h"

using namespace tinyxml2;

class Game
{

private:

	bool Running = true; 

	//void UpdatePlayer();

	//void GameOver();

	RoomEntity* room;

public:
	RoomEntity CurrentRoom;

public: 

	Game();
	~Game();

	bool Run();

	void Initialize();
	void Cleanup();
	void ProcessEvents();
	void Update();

	RoomEntity getCurrRoom() const { return CurrentRoom; }

	void ChangeRoom(int roomID);
	void LoadLevels(); 
};

#endif // !GAME_H