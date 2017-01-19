#ifndef _ENTITY_
#define _ENTITY_

#include <array>

enum class EntityID : int {};

class EntityManager;
class Entity final {
	friend class EntityManager;
	friend class std::array<Entity, 5000>;

private:
	Entity();

public:
	~Entity();

	// Get the entity ID
	EntityID id() const { return eid; };

private:
	EntityID eid;
};


#endif
