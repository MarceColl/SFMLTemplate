#ifndef _ENTITYBLUEPRINT_
#define _ENTITYBLUEPRINT_


#include "Blueprint.h"
#include "Entity.h"


class EntityBlueprint : public Blueprint {
	EntityBlueprint(std::filesystem::path lua_path);	

	~EntityBlueprint();

private:
	
	std::vector<Component*> entity_components;
};


#endif
