#pragma once
class GameSettings
{
	enum DisplayMode
	{ 
		WINDOWED,
		BORDERLESSFS,
		FULLSCRENN
	};

	enum HairPresets
	{ 
		LOW,
		MEDIUM,
		HIGH
	};

	enum BackgroundChars
	{ 
		NONE,
		LOW,
		MEDIUM,
		HIGH,
		ULTRA
	};

private:
	bool VSync = true;
	int FPS;
	int maxFPS;
	bool PreserveSystGamma;
	bool HairWorks; 
	int HairWorksAA;
	DisplayMode mode;
	HairPresets hairPresets;
	BackgroundChars numOfChars;

public:
	GameSettings();
	~GameSettings();

	void Save();
};

