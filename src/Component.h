#pragma once

#include <array>

extern const int MAX_ENTITIES;

template<class T>
class Component {
public:
	Component() {}	
	~Component() {}

private:
	std::array<T, MAX_ENTITIES> component_data;
};
