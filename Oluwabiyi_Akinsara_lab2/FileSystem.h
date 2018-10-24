#pragma once
class FileSystem
{
private:
	//static FileSystem* instance;

public:
	inline static FileSystem& Instance()
	{
		static FileSystem instance;
		return instance;
	}

	void load(std::string fileName);

protected:
	int priority;
	void initialize();
	void update();

private:
	FileSystem();
	~FileSystem();

	inline explicit FileSystem(FileSystem&)
	{
	}

	inline FileSystem& operator=(FileSystem&)
	{
		this;
	}

	void display();
};

