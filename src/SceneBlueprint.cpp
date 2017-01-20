#include "SceneBlueprint.h"


SceneBlueprint::SceneBlueprint(){}

SceneBlueprint::SceneBlueprint(std::filesystem::path filename){
	sol::state lua;
	lua.script_file(filename);
	Scene bp_scene;
	auto bp_entity_list = lua["entities"];
	for(auto bp_entity : bp_entity_list)
	{
		string bp_base = bp_entity["blueprint"];
		bp_scene.entity_manager.createFromBlueprint(bp_base, bp_entity);
	}
	
}

SceneBlueprint::get_copy(){
	return new Scene(bp_scene);
}
