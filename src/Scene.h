#ifndef _SCENE_
#define _SCENE_

#include "Entity.h"
#include "EntityManager.h"
#include "SceneBlueprint.h"

#include <string>

class Scene {
public:
	Scene(std::string name);
	Scene();

	void draw();
private:
	EntityManager entityManager;



};

#endif

