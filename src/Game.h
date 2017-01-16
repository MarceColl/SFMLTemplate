#ifndef _GAME_
#define _GAME_

#include "Configuration.h"


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


#endif
