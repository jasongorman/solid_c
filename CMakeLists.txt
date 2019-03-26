cmake_minimum_required(VERSION 3.13)
project(encapsulation C)

set(CMAKE_C_STANDARD 90)

add_executable(encapsulation main.c carpet_quote.c carpet_quote.h room.h carpet.c carpet.h bool.h rectangular_room.c rectangular_room.h circular_room.c circular_room.h)