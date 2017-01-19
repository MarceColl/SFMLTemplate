#pragma once

extern const int MAX_ENTITIES;

template<struct T>
class Component {
public:
	Component() {}	
	~Component() {}

private:
	std::array<T, MAX_ENTITIES> component_data;
};
