#ifndef _ANIMATION_
#define _ANIMATION_


#include <SFML/Graphics.h>
#include <filesystem>


class Animation {
public:
	Animation(std::string name);

private:
	std::string name;

	std::filesystem::path filename;
	sf::Vector2i size;
	sf::Vector2i beginning;
	sf::Vector2i end;
	uint8_t speed;
	bool loop;
};


#endif
