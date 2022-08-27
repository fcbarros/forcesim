#include "forcesim.hpp"

namespace app
{
    ForceSim::ForceSim(int width, int height, std::string windowName)
        : _width{width}, _height{height}, _windowName{windowName}
    {
    }

    ForceSim::~ForceSim()
    {
    }

    void ForceSim::run()
    {
        _window = std::make_unique<engine::Window>(_width, _height, _windowName.c_str());
        _device = std::make_unique<engine::backend::Vulkan>(*_window);
        _pipeline = std::make_unique<engine::Pipeline>(*_device,
                                                       "E:/source/forcesim/forcesim/app/shader/simple_shader.frag.spv",
                                                       "E:/source/forcesim/forcesim/app/shader/simple_shader.frag.spv",
                                                       engine::Pipeline::defaultPipelineConfigInfo(_width, _height));
        _window->run();
    }
}