#pragma once

#include "../engine/window.hpp"

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
    };
}