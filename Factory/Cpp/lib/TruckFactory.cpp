#include "TruckFactory.h"

#include <iostream>

namespace Factory {

ITransport* TruckFactory::createTransport() {
    return new Truck();
}

}