cmake_minimum_required(VERSION 3.10)
project(Wraith)
add_executable(Wraith src/Wraith.cpp src/App.cpp src/Window.cpp)

add_subdirectory(./dependencies/glfw-3.4)
add_subdirectory(./dependencies/glad)

target_link_libraries(Wraith glad)
target_link_libraries(Wraith glfw)
