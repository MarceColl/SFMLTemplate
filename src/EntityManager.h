#ifndef _ENTITYMANAGER_
#define _ENTITYMANAGER_


#include "Entity.h"

#include <array>
#include <bitset>



const int MAX_ENTITIES = 5000;


class EntityManager {
public:
	EntityManager();

	// Idealment despres de fer els adds hauria de
	// quedar ordenada en funcio de la probablilitat que
	// s'iterin juntes
	// Adds an Entity from an Entity Blueprint
	Entity addFromBlueprint(std::string bp_name);

	// Adds an already existing Entity
	Entity add(Entity e);

	// Remove Entity
	void remove(Entity e);

	// Returns an iterator over all Entites that satisfy filter
	FilteredIterator filter(std::bitset filter);

	class FilteredIterator {
		// TODO: Implement iterator where next is the next
		// Entity that satisfies the filter
	};

private:
	std::array<Entity, MAX_ENTITIES> entities;
};


#endif
