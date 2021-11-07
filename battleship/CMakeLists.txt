cmake_minimum_required(VERSION 3.17)
project(battleship)

set(CMAKE_CXX_STANDARD 14)

add_executable(battleship main.cpp Grid.cpp Grid.h User.cpp User.h Ships.cpp Ships.h Computer.cpp Computer.h)