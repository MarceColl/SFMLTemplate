#include "System.h"
#include "EntityManager.h"
#include "Entity.h"



System::System() {}


void System::update(Scene *scene, float deltaTime) {
	auto entities = scene->getEntityManager()->filter([](Entity e)->bool{ return false; });

	for(Entity &e: entities) {
		_update(e, deltaTime);
	}
}

