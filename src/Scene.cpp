#include "Scene.h"
#include "Entity.h"
#include "EntityManager.h"

Scene::Scene(){
	EntityManager entity_manager = new EntityManager();
	
}

Scene::Scene(Scene s){
	EntityManager entity_manager = new EntityManager(s.entity_manager);
	
}