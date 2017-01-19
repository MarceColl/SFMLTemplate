#ifndef _CONFIGURATION_
#define _CONFIGURATION_


#include <string>
#include <filesystem> 


class Configuration {
public:
	Configuration();

	Configuration(std::filesystem::path filename);

	std::string startScene;
	bool devTools;
	bool vsync;
};


#endif
