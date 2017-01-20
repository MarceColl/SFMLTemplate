#pragma once

extern const int MAX_ENTITIES;

template<struct T>
class Component {
public:
	Component() {}	
	~Component() {}

private:
	std::array<MAX_ENTITIES> component_data;
};
