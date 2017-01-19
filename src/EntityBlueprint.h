#pragma once

#include <unordered_map>
#include <boost/ptr_container/ptr_unordered_map.hpp>
#include "Blueprint.h"
#include "ComponentType.h"
#include "Entity.h"

class ComponentData;

class EntityBlueprint : public Blueprint {
	EntityBlueprint(std::filesystem::path lua_path);

	~EntityBlueprint();

private:
    static void fillAvailableComponentsList();

    static bool string_to_ct_filled = false;
    static std::unordered_map<std::string, ComponentType> string_to_ct;

    boost::ptr_unordered_map<ComponentType, ComponentData> entity_components;
};
