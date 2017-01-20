#pragma once

#icnlude "Globals.h"

#include <array>


template<class T>
class Component {
public:
	Component() {}	
	~Component() {}

private:
	std::array<T, Globals::MAX_ENTITIES> component_data;
};
