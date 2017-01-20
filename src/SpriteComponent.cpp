#include "SpriteComponent.h"

SpriteComponentData::SpriteComponentData(sol::table const& blueprint_data) : TransformComponentData(blueprint_data, sol::table()) {
}

SpriteComponentData::SpriteComponentData(sol::table const& blueprint_data, sol::table const& scene_data) {
    set_sprite(blueprint_data);
    set_sprite(scene_data);
}

void SpriteComponentData::set_sprite(sol::table const& data) {
    std::optional<std::experimental::filesystem::path> lua_filename = data["filename"];
    std::optional<sol::table> lua_size = data["size"];
    std::optional<sol::table> lua_frame = data["frame"];

    sf::Sprite sprite;
    if (lua_filename) {
        sf::Texture texture;
        texture.loadFromFile(lua_filename.generic_string());
        sprite.setTexture(texture);
    }
    if(lua_size){
        if(lua_frame){
            sprite.setTextureRect(sf::IntRect(
                    (*lua_size)[1] * (*lua_frame)[1], 
                    (*lua_size)[2] * (*lua_frame)[2], 
                    (*lua_size)[1], 
                    (*lua_size)[2]
            ));
        }
        else
        {
            sprite.setTextureRect(sf::IntRect(
                0,
                0,
                (*lua_size)[1], 
                (*lua_size)[2]
            ));
        }
    }
    
}