#pragma once

class Entity;
class Scene;
class System {
public:
	System();

	void update(Scene *scene, float deltaTime);

protected:
	virtual void _update(Entity e, float deltaTime);
};
