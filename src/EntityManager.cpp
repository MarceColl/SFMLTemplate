#include "EntityManager.h"


EntityManager::EntityManager() {}


Entity EntityManager::addFromBlueprint(std::string bp_name) {
	// TODO: Aconseguir el blueprint, crear els components
	// necessaris, ordenar el entitymanager per optimitzar
}

Entity EntityManager::add(Entity e) {
	// TODO: Com que la entity ja existeix ha d'existir a
	// algun altre entitymanager, aconseguir els seus components
	// i insertarlos en aquesta escena
}

void EntityManager::remove(Entity e) {
	// TODO: Elimina Entity d'aquest Entity Manager
}

EntityManager::FilteredIterator EntityManager::filter(std::bitset filter) {
	// TODO: Crear FilteredIterator amb filter i retornarlo
}
