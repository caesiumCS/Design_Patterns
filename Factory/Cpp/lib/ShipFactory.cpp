#include "Ship.h"
#include "ShipFactory.h"

#include <iostream>

namespace Factory {

ITransport* ShipFactory::createTransport() {
    return new Ship();
}

}