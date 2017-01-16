#include "Configuration.h"

#include <lua/sol.hpp>
#include <iostream>

Configuration::Configuration() {}


Configuration::Configuration(std::string filename) {
	sol::state lua;	
	lua.script_file(filename);

	startScene = lua["config"]["startScene"];
	devTools = lua["config"]["devTools"];
	vsync = lua["config"]["vsync"];
}
