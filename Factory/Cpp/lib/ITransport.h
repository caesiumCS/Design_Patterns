#pragma once

namespace Factory {

class ITransport {
public:
    virtual void move() {};
    virtual ~ITransport() = default;
};

}