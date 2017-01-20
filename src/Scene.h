#pragma once

#include "Entity.h"
#include "EntityManager.h"
#include "SceneBlueprint.h"

#include <string>

class Scene {
public:
	Scene();
	//Copy
	Scene(Scene s);
	~Scene();

	EntityManager* getEntityManager();
};