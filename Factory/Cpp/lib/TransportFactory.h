#pragma once

#include "ITransport.h"

namespace Factory {

class TransportFactory {
public:
    virtual ITransport* createTransport() { return new ITransport(); };
};

}