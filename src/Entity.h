#ifndef _ENTITY_
#define _ENTITY_


enum class EntityID : uint32_t {};

class EntityManager;
class Entity final {
	friend class EntityManager;

private:
	Entity();

public:
	~Entity();

	// Get the entity ID
	EntityID id() const { return id };

private:
	EntityID id;
};


#endif
