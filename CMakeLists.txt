cmake_minimum_required(VERSION 3.8)
project(GameEngine)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(out ${SOURCE_FILES})

set_target_properties(out PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY_DEBUG ~/ClionProjects/GameEngine/
        )

include_directories(/usr/local/include)
link_directories(/usr/local/lib)
find_package (OpenGL REQUIRED)
find_package (glfw3 REQUIRED)
find_package (GLEW REQUIRED STATIC)

target_link_libraries(out glfw)
target_link_libraries(out GLEW)
target_link_libraries(out ${OPENGL_gl_LIBRARY})

