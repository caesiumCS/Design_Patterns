#pragma once

#include "ITransport.h"

namespace Factory {

class Ship : public ITransport {
public:
    void move() override;
};

}