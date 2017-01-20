#pragma once

class Entity;
class Scene;

class LogicSystem {
public:
	LogicSystem();

	void update(Scene *scene, float deltaTime);

protected:
	virtual void _update(Entity e, float deltaTime);
};

class RenderSystem {
public:
	RenderSystem();

	void render(Scene *scene);

protected:
	virtual void _render(Entity e);
};

class InputSystem {
public:
	InputSystem();

	void update(Scene *scene);

protected:
	virtual void _update(Entity e);
};
