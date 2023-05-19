#include "LogisticCompany.h"

#include <iostream>

int main(int argc, char** argv)
{
    std::cout << std::endl << "Creating Ship-based Logistic company." << std::endl;
    Factory::LogisticCompany shipCompany(Factory::COMPANY_TYPE::CT_SHIP);
    for (int i = 0; i < 5; i++) {
        shipCompany.AddTransport();
    }
    shipCompany.MoveAllTransport();
    std::cout << std::endl << "Now we are creating Truck-based Logistic company." << std::endl;
    Factory::LogisticCompany truckCompany(Factory::COMPANY_TYPE::CT_TRUCK);
    for (int i = 0; i < 7; i++) {
        truckCompany.AddTransport();
    }
    truckCompany.MoveAllTransport();
    return 0;
}