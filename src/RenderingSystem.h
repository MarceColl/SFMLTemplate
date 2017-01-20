#pragma once

#include "System.h"

class Entity;
class RenderingSystem : public System {
public:
	RenderingSystem();

protected:
	void _update(Entity e, float deltaTime) override;
};
