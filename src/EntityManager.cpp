#include "EntityManager.h"


EntityManager::EntityManager() {}


Entity EntityManager::createFromBlueprint(std::string bp_name) {
	// TODO: Aconseguir el blueprint, crear els components
	// necessaris, ordenar el entitymanager per optimitzar
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

EntityManager::FilteredIterator EntityManager::filter(std::bitset filter) {
	// TODO: Crear FilteredIterator amb filter i retornarlo
}

EntityManager::FilteredIterator EntityManager::filter(std::function<bool(Entity)> filter) {
	// TODO: Crear FilteredIterator amb filter i retornarlo
}
