#ifndef ITEM_H
#define ITEM_H

#include "IUsable.h"
#include "Entity.h"
 
class ItemEntity : public IUsable, public Entity
{ 
public:
	ItemEntity(std::string name, int id, std::string desc);
	virtual ~ItemEntity() = default; 

	// Inherited via IUsable
	virtual void Use() override; 
};

#endif // !ITEM_H

