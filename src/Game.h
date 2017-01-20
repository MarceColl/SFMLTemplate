#pragma once

#include "Configuration.h"

#include <SFML/Graphics.hpp>

class Game {
public:	
	Game(Configuration conf);

	void run();

private:
	Configuration conf;

	sf::RenderWindow window;

	void render();

	void update(float deltaTime);

	void events();
};
