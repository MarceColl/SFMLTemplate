#pragma once

#include "Entity.h"

#include <array>
#include <bitset>
#include <functional>



const int MAX_ENTITIES = 5000;


class EntityManager {
private:
	class FilteredIterator {
		// TODO: Implement iterator where next is the next
		// Entity that satisfies the filter
	};

public:
	EntityManager();

	// Idealment despres de fer els adds hauria de
	// quedar ordenada en funcio de la probablilitat que
	// s'iterin juntes
	// Adds an Entity from an Entity Blueprint
	Entity createFromBlueprint(std::string bp_name);

	// Adds an already existing Entity from another EntityManager
	Entity add(Entity e);

	// Check if entity is alive
	bool alive(Entity e) const;

	// Remove Entity
	void destroy(Entity e);

	// Returns an iterator over all Entites that satisfy filter. std::bitset variant.
	FilteredIterator filter(std::bitset<30> filter) const;

	// Returns an iterator over all Entities that satisfy filter. std::function variant.
	FilteredIterator filter(std::function<bool(Entity)> filter) const;


private:
	std::array<Entity, MAX_ENTITIES> entities;
};

