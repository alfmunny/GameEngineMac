cmake_minimum_required(VERSION 3.8)
project(GameEngine)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(out ${SOURCE_FILES})

set ( shaders "resources/shaders")
set ( destination "cmake-BUIld-debug/")

file(COPY ${shaders} DESTINATION resources)

target_link_libraries(out glfw)
target_link_libraries(out GLEW)
target_link_libraries(out ${OPENGL_gl_LIBRARY})

