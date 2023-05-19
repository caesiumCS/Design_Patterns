#include "LogisticCompany.h"
#include "ShipFactory.h"
#include "TruckFactory.h"

namespace Factory {

LogisticCompany::LogisticCompany(COMPANY_TYPE type) {
    switch(type) {
        case COMPANY_TYPE::CT_SHIP:
            this->transportFactory = new ShipFactory();
            break;
        case COMPANY_TYPE::CT_TRUCK:
            this->transportFactory = new TruckFactory();
            break;
    }
}

void LogisticCompany::AddTransport() {
    ITransport* newTransport = this->transportFactory->createTransport();
    this->companyTransport.push_back(newTransport);
}

void LogisticCompany::MoveAllTransport() {
    for (auto& transport : this->companyTransport) {
        transport->move();
    }
}

}