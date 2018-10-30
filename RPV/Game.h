#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>
#include <string>
#include "tinyxml2.h"
#include "Command.h"
#include "InputHandler.h"
#include "RoomEntity.h"
#include "Player.h"


using namespace tinyxml2;

class Game
{

private:

	bool Running = true; 

	//void UpdatePlayer();

	//void GameOver();

	RoomEntity* room = nullptr; 

	std::vector<RoomEntity *> rooms;
 
	Player* player = new Player();
public: 

	Game();
	~Game();

	bool Run();

	void Initialize();
	void Cleanup();
	void ProcessEvents();
	void Update();

	RoomEntity* getCurrRoom() const { return room; }

	void ChangeRoom(int roomID);
	RoomEntity* LoadLevel(XMLElement* roomNode); 

	Player* getPlayer() const { return player; };
};

#endif // !GAME_H