# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.15)

set( CMAKE_EXPORT_COMPILE_COMMANDS ON )

include_directories("$ENV{GLFW_SDK}/include" "$ENV{VULKAN_SDK}/include")
link_directories("$ENV{GLFW_SDK}/lib-vc2022" "$ENV{VULKAN_SDK}/Lib")

project ("forcesim")

# Include sub-projects.
add_subdirectory ("forcesim")
