#include <iostream>

class ITransport {
public:
    virtual void move();
};

class Ship : public ITransport {
public:
    void move() override {
        std::cout << "Ship is moving!" << std::endl;
    }
};

class Truck : public ITransport {
public: 
    void move() override {
        std::cout << "Truck is moving!" << std::endl;
    }
};

int main(int argc, char** argv)
{
	std::cout << "Hello, World!" << std::endl;
	return 0;
}