//
// Created by Qingzhen Han on 2023-07-04.
//

#ifndef DESIGNPATTERN_CHICAGOSTYLECHEESEPIZZA_H
#define DESIGNPATTERN_CHICAGOSTYLECHEESEPIZZA_H

#include "Pizza.h"

class ChicagoStyleCheesePizza : public Pizza {
public:
    ChicagoStyleCheesePizza() : PIZZA_NAME {}

    void Prepare() override { Log("Prepare " + name); }
};
#endif // DESIGNPATTERN_CHICAGOSTYLECHEESEPIZZA_H
