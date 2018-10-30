#include "Game.h"

using namespace tinyxml2;

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
	//	delete room;
	//	room = nullptr;
	}
}

void Game::Initialize()
{
	//room = new RoomEntity();

	XMLDocument* doc = new XMLDocument();
	doc->LoadFile("../Assets/Rooms.xml"); 
	if (doc->Error() != XML_SUCCESS)
	{
		std::cout << "Data File is Not Loaded" << std::endl; 
		delete doc; 
		return;
	}

	XMLNode *rootnode = doc->FirstChildElement("Rooms");

	XMLElement *roomNode = rootnode->FirstChildElement("Room");
	
	rooms.push_back(LoadLevel(roomNode));

	room = rooms[0];
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

RoomEntity* Game::LoadLevel(XMLElement* roomNode)
{
	int id = roomNode->IntAttribute("id");
	int north = roomNode->IntAttribute("n");
	int east = roomNode->IntAttribute("e");
	int west = roomNode->IntAttribute("w");
	int south = roomNode->IntAttribute("s");
	
	XMLElement* nameNode = roomNode->FirstChildElement("Name");
	std::string name = nameNode->GetText();
	XMLElement* posNode = nameNode->NextSiblingElement("Location");
	XMLElement* descNode = posNode->NextSiblingElement("Description");
 
	int arr[4] = {north, east, west, south};

	RoomEntity* r = new RoomEntity(name, name,
		id, arr);

	return r;
}

Game::~Game()
{
}

