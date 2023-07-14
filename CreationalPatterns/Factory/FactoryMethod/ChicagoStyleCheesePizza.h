//
// Created by Qingzhen Han on 2023-07-04.
//

#ifndef DESIGNPATTERN_CHICAGOSTYLECHEESEPIZZA_H
#define DESIGNPATTERN_CHICAGOSTYLECHEESEPIZZA_H

#include "Pizza.h"

class ChicagoStyleCheesePizza : public Pizza {
public:
    ChicagoStyleCheesePizza() : Pizza(__func__) {}

    void Prepare() override { Log("Prepare " + name); }
};
#endif // DESIGNPATTERN_CHICAGOSTYLECHEESEPIZZA_H
