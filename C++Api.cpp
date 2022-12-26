#include <iostream>
#include "vehicles/multirotor/api/MultirotorRpcLibClient.hpp"
#include "vehicles/multirotor/api/MultirotorApiBase.hpp"

int main()
{
    msr::airlib::MultirotorRpcLibClient client;

    std::cout << "Press Enter to enable API control\n";
    client.enableApiControl(true);

    return 0;
}
