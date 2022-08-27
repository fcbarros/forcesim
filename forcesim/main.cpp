// forcesim.cpp : Defines the entry point for the application.
//

#include <iostream>
#include "app/forcesim.hpp"

using namespace std;
using namespace app;

int main()
{
    ForceSim theApp{800, 600, "Force Simulator"};

    try {
        theApp.run();
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
