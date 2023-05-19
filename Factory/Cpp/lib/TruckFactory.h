#pragma once

#include "ITransport.h"
#include "TransportFactory.h"
#include "Truck.h"

namespace Factory {

class TruckFactory : public TransportFactory {
public:
    ITransport* createTransport() override;
};

}