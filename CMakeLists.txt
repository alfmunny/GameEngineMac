cmake_minimum_required(VERSION 3.8)
project(GameEngine)

set(CMAKE_CXX_STANDARD 11)

include_directories(lib)

set(SOURCE_FILES main.cpp shader.h stb_image.h lib/imgui.h lib/imgui.cpp lib/imconfig.h lib/stb_textedit.h
        lib/imgui_internal.h lib/imgui_draw.cpp lib/stb_rect_pack.h lib/stb_truetype.h imgui_impl_glfw_gl3.h imgui_impl_glfw_gl3.cpp)

add_executable(out ${SOURCE_FILES})

set_target_properties(out PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY_DEBUG ~/ClionProjects/GameEngine/
        )

include_directories( /usr/local/include )

link_directories(/usr/local/lib)

find_package (OpenGL REQUIRED)
find_package (glfw3 REQUIRED)
find_package (glm REQUIRED)
find_package (GLEW REQUIRED STATIC)

target_link_libraries(out glfw)
target_link_libraries(out GLEW)
target_link_libraries(out glm)
target_link_libraries(out ${OPENGL_gl_LIBRARY})

