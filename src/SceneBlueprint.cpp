#include "SceneBlueprint.h"


SceneBlueprint::SceneBlueprint(){}

SceneBlueprint::SceneBlueprint(std::filesystem::path filename){
	sol::state lua;
	lua.script_file(filename);
	Scene bp_scene;
	auto bpEntityList = lua["entities"];
	for(auto bpEntity : bpEntityList)
	{
		string bp_base = bpEntity["base"];
		Entity e = bp_scene.entityManager.createFromBlueprint(bp_base);
		e.prop = bpEntity["prop"]
	}
	
}
