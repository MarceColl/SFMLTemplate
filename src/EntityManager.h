#ifndef _ENTITYMANAGER_
#define _ENTITYMANAGER_


#include "Entity.h"

#include <array>


const int MAX_ENTITIES = 5000;


class EntityManager {
public:
	EntityManager();

	// Adds an Entity from an Entity Blueprint
	Entity addFromBlueprint(std::string bp_name);

	// Adds an already existing Entity
	Entity add(Entity e);

	// Remove Entity
	void remove(Entity e);

	// Returns an iterator that iterates over all Entites that satisfy filter
	FilteredIterator filter(std::bitset filter);

private:
	std::array<Entity, MAX_ENTITIES> entities;
};


#endif
