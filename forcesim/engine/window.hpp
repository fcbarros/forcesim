#pragma once

#include <string>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

namespace engine
{
	class Window
	{
	public:
		Window(int width, int height, std::string windowName);
		~Window();

		void run();

		Window(const Window&) = delete;
		Window& operator=(const Window&) = delete;

		void createWindowSurface(VkInstance instance, VkSurfaceKHR *surface);

	private:
		void initWindow();
		void terminateWindow();
		bool shouldClose();

		const int _width;
		const int _height;
		std::string _windowName;

		GLFWwindow* _window;
	};
}