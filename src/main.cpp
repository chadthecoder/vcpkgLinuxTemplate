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

    int version = gladLoadGL(); //(glfwGetProcAddress);
    if (version == 0) {
        printf("Failed to initialize OpenGL context\n");
        return -1;
    }
    else std::cout << "Glad is working\n";

    glfwTerminate();
    return 0;
}