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

    glfwTerminate();
    return 0;
}