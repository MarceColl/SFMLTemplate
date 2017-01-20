#pragma once

#include "Configuration.h"

#include <vector>
#include <SFML/Graphics.hpp>

class LogicSystem;
class RenderSystem;
class InputSystem;
class Scene;
class Game {
public:	
	Game(Configuration conf);

	void run();

private:
	Configuration conf;

	sf::RenderWindow window;

	std::vector<LogicSystem*> logic_systems;
	std::vector<RenderSystem*> render_systems;
	std::vector<InputSystem*> input_systems;

	Scene* current_scene;

	void render();

	void update(float deltaTime);

	void events();
};
