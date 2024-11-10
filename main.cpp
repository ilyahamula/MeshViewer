#include <glm/glm.hpp>
#include <glfw/glfw3.h>
#include <iostream>

int main()
{
    // Приклад використання GLM
    glm::vec3 vector(1.0f, 0.0f, 0.0f);
    std::cout << "Vector: (" << vector.x << ", " << vector.y << ", " << vector.z << ")\n";

    // Ініціалізація GLFW
    if (!glfwInit())
    {
        std::cerr << "Failed to initialize GLFW\n";
        return -1;
    }
    glfwTerminate();
    return 0;
}
