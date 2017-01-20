#include "System.h"
#include "EntityManager.h"
#include "Entity.h"
#include "Scene.h"


LogicSystem::LogicSystem() {}


void LogicSystem::update(Scene *scene, float deltaTime) {
	auto entities = scene->getEntityManager()->filter([](Entity e)->bool{ return false; });

	for(auto e : entities) {
		_update(e, deltaTime);
	}
}



RenderSystem::RenderSystem() {}


void RenderSystem::render(Scene *scene) {
	auto entities = scene->getEntityManager()->filter([](Entity e)->bool{ return false; });

	for(auto e : entities) {
		_render(e);
	}
}



InputSystem::InputSystem() {}


void InputSystem::update(Scene *scene) {
	auto entities = scene->getEntityManager()->filter([](Entity e)->bool{ return false; });

	for(auto e : entities) {
		_update(e);
	}
}
