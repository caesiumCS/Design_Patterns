#pragma once

#include "ITransport.h"

namespace Factory {

class Truck : public ITransport {
public:
    void move() override;
};

}