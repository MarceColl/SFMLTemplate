#pragma once

class EntityManager;

class Scene {
public:
	Scene();

	~Scene();

	EntityManager* getEntityManager();
};
