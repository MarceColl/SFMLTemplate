#include "TransformComponent.h"

TransformComponentData::TransformComponentData(sol::table const& blueprint_data) : TransformComponentData(blueprint_data, sol::table()) {
}

TransformComponentData::TransformComponentData(sol::table const& blueprint_data, sol::table const& scene_data) {
    set_transform_values(blueprint_data);
    set_transform_values(scene_data);
}

void TransformComponentData::set_transform_values(sol::table const& data) {
    std::optional<sol::table> lua_position = data["position"];
    std::optional<sol::table> lua_scale = data["scale"];
    std::optional<double> lua_rotation = data["rotation"];

    if (lua_position) {
        position = sf::Vector2f((*lua_position)[1], (*lua_position)[2]);
    }
    if (lua_scale) {
        scale = sf::Vector2f((*lua_position)[1], (*lua_position)[2]);
    }
    if (lua_rotation) {
        rotation = *lua_rotation;
    }
}