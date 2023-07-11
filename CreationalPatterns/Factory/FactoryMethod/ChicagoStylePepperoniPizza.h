//
// Created by Qingzhen Han on 2023-07-04.
//

#ifndef DESIGNPATTERN_CHICAGOSTYLEPEPPERONIPIZZA_H
#define DESIGNPATTERN_CHICAGOSTYLEPEPPERONIPIZZA_H

#include "Pizza.h"

class ChicagoStylePepperoniPizza: public Pizza{
public:
    ChicagoStylePepperoniPizza() : PIZZA_NAME {}

    void Prepare() override {
        cout << "Prepare " << name << endl;
    }
};
#endif //DESIGNPATTERN_CHICAGOSTYLEPEPPERONIPIZZA_H
