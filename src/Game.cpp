#include "Game.h"


Game::Game(Configuration conf) {
	window = sf::RenderWindow();
}


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

}


void Game::update(float deltaTime) {

}


void Game::events() {
	
}
