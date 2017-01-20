#include "Game.h"
#include "System.h"


Game::Game(Configuration conf) :
	window(sf::VideoMode(1200, 1000), "Hola")
{}


void Game::run() {
	sf::Clock clock;

	while(window.isOpen()) {
		float deltaTime = clock.restart().asSeconds();

		events();
		update(deltaTime);
		render();
	}
}


void Game::render() {
	for(auto s: render_systems) {
		s->render(current_scene);
	}
}

void Game::update(float deltaTime) {
	for(auto s: logic_systems) {
		s->update(current_scene, deltaTime);
	}
}

void Game::events() {
	for(auto s: input_systems) {
		s->update(current_scene);
	}
}
