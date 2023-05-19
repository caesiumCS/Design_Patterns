#include "Ship.h"

#include <iostream>

namespace Factory {

void Ship::move() {
    std::cout << "Ship is moving!" << std::endl;
}

}