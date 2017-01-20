#include "EntityManager.h"


EntityManager::EntityManager() {}
EntityManager::EntityManager(EntityManager em) {
	//TODO: Copy 
}


Entity EntityManager::createFromBlueprint(std::filesystem::path lua_path) {
	// TODO: Aconseguir el blueprint, crear els components
	// necessaris, ordenar el entitymanager per optimitzar
}

Entity EntityManager::createFromBlueprint(std::filesystem::path lua_path, sol::table const& bp_data) {
	EntityBlueprint bp = new EntityBlueprint(lua_path);

}

Entity EntityManager::add(Entity e) {
	// TODO: Com que la entity ja existeix ha d'existir a
	// algun altre entitymanager, aconseguir els seus components
	// i insertarlos en aquesta escena
}

bool EntityManager::alive(Entity e) const {
	// TODO: Check if entity is alive
}

void EntityManager::destroy(Entity e) {
	// TODO: Elimina Entity d'aquest Entity Manager
}

EntityManager::FilteredIterator EntityManager::filter(std::bitset<30> filter) const {
	// TODO: Crear FilteredIterator amb filter i retornarlo
}

EntityManager::FilteredIterator EntityManager::filter(std::function<bool(Entity)> filter) const {
	// TODO: Crear FilteredIterator amb filter i retornarlo
}
