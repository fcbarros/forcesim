#include "window.hpp"

namespace engine
{
    Window::Window(int width, int height, std::string windowName)
        : _width{ width }
        , _height{ height }
        , _windowName{ windowName }
    {
    }

    Window::~Window()
    {
        terminateWindow();
    }

    void Window::run()
    {
        initWindow();
        while (!shouldClose())
        {
            glfwPollEvents();
        }
    }

    void Window::initWindow()
    {
        glfwInit();

        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

        _window = glfwCreateWindow(_width, _height, _windowName.c_str(), nullptr, nullptr);
    }

    void Window::terminateWindow()
    {
        glfwDestroyWindow(_window);
        glfwTerminate();
    }

    bool Window::shouldClose()
    {
        return glfwWindowShouldClose(_window);
    }
}