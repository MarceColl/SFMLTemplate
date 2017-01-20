#pragma once

#include "Component.h"
#include <lua/sol.hpp>

class TransformComponentData {
public:
	TransformComponentData(sol::table const& blueprint_data); 
	TransformComponentData(sol::table const& blueprint_data, sol::table const& scene_data);

	sf::Vector2f position;
	sf::Vector2f scale;
	float rotation;

private:
	void set_transform_values(sol::table const& data);
};


class TransformComponent : public Component<TransformComponentData> {
public:
	sf::Vector2f getPosition(Entity e);	
	sf::Vector2f getScale(Entity e);
	float getRotation(Entity e);

	void setPosition(Entity e, sf::Vector2f n_position);
	void setScale(Entity e, sf::Vector2f n_scale);
	void setRotation(Entity e, float n_rotation);

	void move(Entity e, sf::Vector2f movement);
	void scale(Entity e, sf::Vector2f scaling);
	void rotate(Entity e, float angle);
};
