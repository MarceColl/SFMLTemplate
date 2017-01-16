#ifndef _CONFIGURATION_
#define _CONFIGURATION_


#include <string>


class Configuration {
public:
	Configuration();

	Configuration(std::string filename);

	std::string startScene;
	bool devTools;
	bool vsync;
};


#endif
