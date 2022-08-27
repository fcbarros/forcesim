#pragma once

#include "../engine/window.hpp"
#include "../engine/pipeline.hpp"
#include "../engine/backend/vulkan.hpp"

#include<memory>

namespace app
{
    class ForceSim
    {
    public:
        ForceSim(int width, int height, std::string windowName);
        ~ForceSim();

        ForceSim(const ForceSim&) = delete;
        ForceSim& operator=(const ForceSim&) = delete;

        void run();

    private:
        const int _width;
        const int _height;
        std::string _windowName;

        std::unique_ptr<engine::Window> _window;
        std::unique_ptr<engine::Pipeline> _pipeline;
        std::unique_ptr<engine::backend::Vulkan> _device;
    };
}