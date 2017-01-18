#include "SceneBlueprint.h"

const string SCENE_PATH = "scenes/";

SceneBlueprint::SceneBlueprint(){}

SceneBlueprint::SceneBlueprint(std::string name){
	sol::state lua;
	lua.script_file(SCENE_PATH + name + ".lua");

	
}