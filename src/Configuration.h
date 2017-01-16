#ifndef _CONFIGURATION_
#define _CONFIGURATION_


class Configuration {
public:
	Configuration();

	Configuration(std::string filename);

private:
	std::string startScene;
	bool devTools;
	bool vsync;
};


#endif
