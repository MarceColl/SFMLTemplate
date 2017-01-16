#ifndef _ENTITY_
#define _ENTITY_


enum class EntityID : size_t {};


class Entity {
public:
	Entity();

private:
	EntityID id;
};


#endif
