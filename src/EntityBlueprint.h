#pragma once

#include "Blueprint.h"
#include "Entity.h"


class EntityBlueprint : public Blueprint {
	EntityBlueprint(std::filesystem::path lua_path);	

	~EntityBlueprint();

private:
	
	std::vector<Component*> entity_components;
};
