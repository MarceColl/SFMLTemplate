#pragma once

#include "Blueprint.h"
#include "Animation.h"

#include <filesystem>


class AnimationBlueprint : public Blueprint {
public:
	// Create a new blueprint from a Lua script path
	AnimationBlueprint(std::filesystem::path lua_path);

private:
	Animation bp_animation;
};
