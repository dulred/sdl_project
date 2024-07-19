cmake_minimum_required(VERSION 3.20)

project(CMakeSDL)

include(sdl2-config.cmake)

add_executable(main main.cpp)

target_link_libraries(main PRIVATE SDL2::SDL2main SDL2::SDL2)