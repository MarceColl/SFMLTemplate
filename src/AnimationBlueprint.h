#ifndef _ANIMATIONBLUEPRINT_
#define _ANIMATIONBLUEPRINT_

#include "Blueprint.h"
#include "Animation.h"

#include <filesystem>


class AnimationBlueprint : public Blueprint {
public:
	// Create a new blueprint from a Lua script path
	AnimationBlueprint(std::filesystem::path lua_path);

	// Get the Blueprint's name
	std::string name();

private:
	Animation bp_animation;
	std::string name;
};


#endif
