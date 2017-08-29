#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

int main() {
    std::cout << "Hello, World!" << std::endl;

    GLFWwindow *m_Window;


    if (!glfwInit())
        return -1;

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

    m_Window = glfwCreateWindow(600, 800, "Learn OpenGL", nullptr, nullptr);

    int screenWidth, screenHeight;

    glfwGetFramebufferSize(m_Window, &screenWidth, &screenHeight);


    if (m_Window == nullptr)
    {
        std::cout << "Failed to initialize GLFW" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(m_Window);
    glewExperimental = GL_TRUE;

    if ( GLEW_OK != glewInit())
    {
        std::cout << "Failed to initialize GLEW" << std::endl;
        return -1;
    }

    glViewport(0, 0, screenWidth, screenHeight);
    while( !glfwWindowShouldClose(m_Window))
    {
        glfwPollEvents();
        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(m_Window);

    }
    glfwTerminate();
    return 0;
}