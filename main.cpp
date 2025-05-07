#include <GLFW/glfw3.h>
#include <iostream>

void initOpenGL() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void render() {
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_TRIANGLES);
    glColor3f(1, 0, 0); glVertex2f(-0.5f, -0.5f);
    glColor3f(0, 1, 0); glVertex2f( 0.5f, -0.5f);
    glColor3f(0, 0, 1); glVertex2f( 0.0f,  0.5f);
    glEnd();
}

int main() {
    if (!glfwInit()) {
        std::cerr << "GLFW fehlgeschlagen\n";
        return -1;
    }

    GLFWwindow* window = glfwCreateWindow(800, 600, "Lerne OpenGL", nullptr, nullptr);
    if (!window) {
        std::cerr << "Fenster konnte nicht erstellt werden\n";
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);
    initOpenGL();

    while (!glfwWindowShouldClose(window)) {
        render();
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
