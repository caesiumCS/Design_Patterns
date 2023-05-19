#pragma once

#include "ITransport.h"
#include "TransportFactory.h"

namespace Factory {

class ShipFactory : public TransportFactory {
public:
    ITransport* createTransport() override;
};

}