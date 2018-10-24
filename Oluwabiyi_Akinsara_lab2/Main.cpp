#include "GameEngine.h"
#include <ctime>

int main()
{ 
	GameEngine* gEngine = new GameEngine();
	gEngine->initialize();

	std::string path = "../Assets/Asset.xml";

	FileSystem::Instance().load(path);
 
    time_t end = time(NULL) + 10;
    while (time(NULL) <= end)
    {
		gEngine->GameLoop();
		std::cout << std::endl;
    }

	gEngine->display();

	delete gEngine;
	gEngine = nullptr;

	return 0;

}