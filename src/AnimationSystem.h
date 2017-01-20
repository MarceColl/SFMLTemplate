#pragma once

#include "System.h"
#include "Entity.h"

class AnimationSystem : public LogicSystem {
	AnimationSystem();

protected:
	virtual void _update(Entity e, float deltaTime) override;

	float timeFromLastFrame;
};
