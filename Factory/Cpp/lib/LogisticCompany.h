#pragma once

#include "ITransport.h"
#include "TransportFactory.h"

#include <vector>

namespace Factory {

enum class COMPANY_TYPE {CT_SHIP = 0, CT_TRUCK = 1};

class LogisticCompany {
private:

    std::vector<ITransport*> companyTransport;
    TransportFactory* transportFactory;

public:

    LogisticCompany(COMPANY_TYPE type);

    void AddTransport();

    void MoveAllTransport();

};

}

