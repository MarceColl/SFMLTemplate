#pragma once

#include "Component.h"
#include <lua/sol.hpp>

class SpriteComponentData {
public:
	SpriteComponentData(sol::table const& blueprint_data); 
	SpriteComponentData(sol::table const& blueprint_data, sol::table const& scene_data);

	sf::Sprite sprite;

private:
	void set_sprite(sol::table const& data);
};


class SpriteComponent : public Component<SpriteComponentData> {
public:
	sf::Sprite get_sprite(Entity e);
};