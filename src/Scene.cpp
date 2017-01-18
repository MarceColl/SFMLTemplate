#include "Scene.h"
#include "Entity.h"
#include "EntityManager.h"
#include "SceneBlueprint.h"

Scene::Scene(){}

Scene::Scene(std::string name){
	SceneBlueprint bp = new SceneBlueprint(name);
	//-Get data from scene blueprint
	//-For each data, create entity from blueprint and override with data
	//-Add entity to entity manager
	
}

Scene::draw(){

}