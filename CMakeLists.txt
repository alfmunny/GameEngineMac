cmake_minimum_required(VERSION 3.8)
project(GameEngine)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(GameEngine ${SOURCE_FILES})

target_link_libraries(GameEngine glfw)
target_link_libraries(GameEngine GLEW)
target_link_libraries(GameEngine ${OPENGL_gl_LIBRARY})

