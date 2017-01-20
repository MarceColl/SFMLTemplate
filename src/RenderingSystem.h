#pragma once

#include "System.h"

class Entity;
class RenderingSystem : public RenderSystem {
public:
	RenderingSystem();

protected:
	void _update(Entity e, float deltaTime) override;
};
