#include "System.h"
#include "Entity.h"


class AnimationSystem : public System {
	AnimationSystem();

protected:
	virtual void _update(Entity e, float deltaTime) override;

	float timeFromLastFrame;
};
