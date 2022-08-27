#include "forcesim.hpp"

namespace app
{
    ForceSim::ForceSim(int width, int height, std::string windowName)
        : _width{ width }
        , _height{ height }
        , _windowName{ windowName }
    {
    }

    ForceSim::~ForceSim()
    {
    }

    void ForceSim::run()
    {
        _window = std::make_unique<engine::Window>(_width, _height, _windowName.c_str());
        _window->run();
    }
}