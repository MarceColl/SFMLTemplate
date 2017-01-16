cmake_minimum_required(VERSION 2.6)


if(NOT CMAKE_BUILD_TYPE)
	set(CMAKE_BUILD_TYPE Debug CACHE STRING "Choose the type of build (Debug or Release)" FORCE)
endif()

project(ggj2017)

set(ggj2017_VERSION_MAJOR 1)
set(ggj2017_VERSION_MINOR 0)

include_directories("${PROJECT_BINARY_DIR}")

set(EXECUTABLE_NAME "ggj2017")
add_executable(${EXECUTABLE_NAME} 
	src/main.cpp
	src/Game.cpp
	src/Configuration.cpp
	)

include_directories("${PROJECT_SOURCE_DIR}/lib")

add_subdirectory("${PROJECT_SOURCE_DIR/}lib/imgui")

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
find_package(SFML 2 REQUIRED system window graphics network audio)
if(SFML_FOUND)
	include_directories(${SFML_INCLUDE_DIR})
	target_link_libraries(${EXECUTABLE_NAME} ${SFML_LIBRARIES} imgui)
endif()

find_package(Lua 5.3 REQUIRED)
if(LUA_FOUND)
	target_link_libraries(${EXECUTABLE_NAME} ${LUA_LIBRARIES})
endif()


find_package(OpenGL REQUIRED)
include_directories(${OPENGL_INCLUDE_DIR})
if (OPENGL_FOUND)
  target_link_libraries(${EXECUTABLE_NAME} ${OPENGL_LIBRARIES})
  # or: target_link_libraries(${EXECUTABLE_NAME} ${OPENGL_gl_LIBRARY})
  target_link_libraries(${EXECUTABLE_NAME} m)  # if you use maths.h
endif()

