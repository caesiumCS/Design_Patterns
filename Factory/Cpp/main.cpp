#include "Ship.h"
#include "Truck.h"

#include <iostream>

int main(int argc, char** argv)
{
    std::cout << "Hello, World!" << std::endl;
    Factory::Truck* truck = new Factory::Truck();
    truck->move();
    Factory::Ship* ship = new Factory::Ship();
    ship->move();
    return 0;
}