#include "Game.h"

#include <SFML/Graphics.hpp>


Game::Game(Configuration conf) :
	window(sf::VideoMode(1200, 1000), "Hola")
{
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
