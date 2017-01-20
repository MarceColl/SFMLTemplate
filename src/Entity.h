#pragma once

#include <array>

extern const int MAX_ENTITIES;

enum class EntityID : int {};

class EntityManager;
class Entity final {
	friend class EntityManager;
	friend class std::array<Entity, MAX_ENTITIES>;

private:
	Entity();

public:
	~Entity();

	// Get the entity ID
	EntityID id() const { return eid; };

private:
	EntityID eid;

	static EntityManager* em;
};
