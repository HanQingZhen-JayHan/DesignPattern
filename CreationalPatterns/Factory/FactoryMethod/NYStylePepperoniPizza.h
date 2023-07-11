//
// Created by Qingzhen Han on 2023-07-04.
//

#ifndef DESIGNPATTERN_NYSTYLEPEPPERONIPIZZA_H
#define DESIGNPATTERN_NYSTYLEPEPPERONIPIZZA_H

#include "Pizza.h"

class NYStylePepperoniPizza : public Pizza {
public:
    NYStylePepperoniPizza() : PIZZA_NAME {}

    void Prepare() override { cout << "Prepare " << name << endl; }
};
#endif // DESIGNPATTERN_NYSTYLEPEPPERONIPIZZA_H
