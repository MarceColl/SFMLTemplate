#pragma once

#include <string>
#include <experimental/filesystem> 

class Configuration {
public:
	Configuration();

	Configuration(std::experimental::filesystem::path filename);

	std::string startScene;
	bool devTools;
	bool vsync;
};
