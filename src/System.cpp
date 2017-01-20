#include "System.h"
#include "EntityManager.h"
#include "Entity.h"
#include "Scene.h"


System::System() {}


void System::update(Scene *scene, float deltaTime) {
	auto entities = scene->getEntityManager()->filter([](Entity e)->bool{ return false; });

	for(auto e: entities) {
		_update(e, deltaTime);
	}
}

