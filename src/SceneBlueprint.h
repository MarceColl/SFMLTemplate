#ifndef _SCENEBLUEPRINT_
#define _SCENEBLUEPRINT_

#include "Blueprint.h"
#include "Scene.h"

class SceneBlueprint : public  Blueprint{
public:
	SceneBlueprint(std::filesystem::path lua_path);
private:
	Scene bp_scene;

};

#endif