#pragma once

class ISystem 
{ 
public:
	virtual int priority() = 0;
	virtual void update() = 0;
};
