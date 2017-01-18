#ifndef _SCENEBLUEPRINT_
#define _SCENEBLUEPRINT_

#include <lua/sol.hpp>

class SceneBlueprint {
public:
	SceneBlueprint(std::string name);
	SceneBlueprint();
private:
	extern const string SCENE_PATH;
	sol::state lua;

};

#endif