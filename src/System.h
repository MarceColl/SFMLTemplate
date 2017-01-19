#ifndef _SYSTEM_
#define _SYSTEM_

#include "Scene.h"

class System {
public:
	System();

	void update(Scene *scene, float deltaTime);

protected:
	virtual void _update(Entity e, float deltaTime);
};


#endif
