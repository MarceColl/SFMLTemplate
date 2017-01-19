#include "EntityBlueprint.h"

// TODO: Include ComponentData definitions
class TransformComponentData;
class SpriteComponentData;
class CollisionComponentData;

EntityBlueprint::EntityBlueprint(std::filesystem::path lua_path) {
    //
    if (!string_to_ct_filled) {
        fillAvailableComponentsList();
    }

    sol::state entity_blueprint;
    entity_blueprint.script_file(lua_path);

    bp_name = entity_blueprint.begin()->first;

    sol::table components_list = entity_blueprint.begin()->second;

    components_list::for_each([this] (sol::object const& key, sol::object const& value) {
        switch(string_to_ct.at(key)) {
            case ComponentType::Transform:
                entity_components.insert(ComponentType::Transform, new TransformComponentData(value));
                break;
            case ComponentType::Sprite:
                entity_components.insert(ComponentType::Sprite, new SpriteComponentData(value));
                break;
            case ComponentType::Collision:
                entity_components.insert(ComponentType::Collision, new CollisionComponentData(value));
                break;
        }
    });

}

EntityBlueprint::fillAvailableComponentsList() {
    string_to_ct.emplace("TransformComponent", ComponentType::Transform);
    string_to_ct.emplace("SpriteComponent", ComponentType::Sprite);
    string_to_ct.emplace("CollisionComponent", ComponentType::CollisionComponent);

    assert(string_to_ct.size() == static_cast<std::size_t>(ComponentType::Count));
    string_to_ct_filled = true;
}