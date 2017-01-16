#include "Configuration.h"
#include "Game.h"


int main() {
	Configuration config("res/config/config.lua");
	Game game(config);

	game.run();
}
