#include "FileSystem.h"
#include <iostream>



FileSystem::FileSystem()
{
}


FileSystem::~FileSystem()
{
}

void FileSystem::initialize()
{
	std::cout << "File System: intialized" << std::endl;
}

void FileSystem::update()
{
	std::cout << "File System: Updated" << std::endl; 
}

void FileSystem::display()
{
	std::cout << "File System: Displayed" << std::endl; 
}
