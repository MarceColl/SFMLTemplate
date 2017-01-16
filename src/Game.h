#ifndef _GAME_
#define _GAME_

#include "Configuration.h"

#include <lua/sol.hpp>


class Game {
public:	
	Game(Configuration conf);

private:
	Configuration conf;

	sf::RenderWindow window;
};


#endif
