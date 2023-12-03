#define GLFW_INCLUDE_NONE
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>

int main()
{
    if (!glfwInit())
    {
        std::cout << "Bad job!\n";
    }
    else std::cout << "Good job!\n";

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    //glsl_version currently only used for imgui code
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_RESIZABLE, GL_FALSE); //make so window is not resizable
    //glfwWindowHint(GLFW_SAMPLES, 4);

    const char* glsl_version = "#version 330"; //if 3.3, then 330 and same for newer versions

    GLFWwindow* window = glfwCreateWindow(800, 600, "Template", NULL, NULL);
    if (window == NULL)
    {
        std::cout << "Failed to create GLFW window\n";
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent( window );

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }
    else std::cout << "Glad is working\n";

    while (!glfwWindowShouldClose(window))
    {
        /* code */
    }
    

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}