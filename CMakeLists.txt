cmake_minimum_required(VERSION 3.10)

project(Labyrinth)

set(CMAKE_C_FLAGS "-std=c99 -g -Wall --coverage")
set(CMAKE_C_FLAGS_DEBUG "-g -DDEBUG --coverage")
set(CMAKE_C_FLAGS_RELEASE "-O3")

add_executable( main main.c)