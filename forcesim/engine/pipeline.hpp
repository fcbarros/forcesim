#pragma once

#include "backend/vulkan.hpp"

#include <string>
#include <vector>

namespace engine
{
    struct PipelineConfigInfo
    {
    };

    class Pipeline
    {
    public:
        Pipeline(backend::Vulkan &device,
                 const std::string &vertFilePath,
                 const std::string &fragFilePath,
                 const PipelineConfigInfo &configInfo);
        ~Pipeline();

        Pipeline(const Pipeline &) = delete;
        Pipeline &operator=(const Pipeline &) = delete;

        static PipelineConfigInfo defaultPipelineConfigInfo(uint32_t width, uint32_t height);

    private:
        static std::vector<char> readFile(const std::string &filepath);

        void createGraphicsPipeline(const std::string &vertFilePath,
                                    const std::string &fragFilePath,
                                    const PipelineConfigInfo &configInfo);
        void createShaderModule(const std::vector<char>& code, VkShaderModule* shaderModule);

        backend::Vulkan& _device;
        VkPipeline _graphicsPipeline;
        VkShaderModule _vertShaderModule;
        VkShaderModule _fragShaderModule;
    };
}