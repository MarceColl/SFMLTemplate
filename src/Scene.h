#pragma once

#include "Entity.h"
#include "EntityManager.h"
#include "SceneBlueprint.h"

#include <string>
class EntityManager;

class Scene {
public:
	Scene();
	//Copy
	Scene(Scene s);
	~Scene();

	EntityManager* getEntityManager();
};