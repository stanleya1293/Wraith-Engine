cmake_minimum_required(VERSION 4.0)
project(glad)

add_library(glad src/glad.c include/glad/glad.h)

target_include_directories(glad PUBLIC include/)
