#pragma once

#include <filesystem>


class Blueprint {
public:
	Blueprint(std::filesystem::path path);

	~Blueprint();

	// Get the Blueprint's name
	std::string name();

protected:
	std::string bp_name;
};
