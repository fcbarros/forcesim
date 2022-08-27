# CMakeList.txt : CMake project for forcesim, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.15)

# Add source to this project's executable.
add_executable (forcesim "main.cpp"  "app/forcesim.cpp" "app/forcesim.hpp" "engine/window.cpp")

set_property(TARGET forcesim PROPERTY CXX_STANDARD 20)

# TODO: Add tests and install targets if needed.
target_link_libraries(forcesim glfw3_mt vulkan-1)
