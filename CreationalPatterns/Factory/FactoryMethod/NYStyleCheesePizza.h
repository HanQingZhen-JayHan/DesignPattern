//
// Created by Qingzhen Han on 2023-07-04.
//

#ifndef DESIGNPATTERN_NYSTYLECHEESEPIZZA_H
#define DESIGNPATTERN_NYSTYLECHEESEPIZZA_H

#include "Pizza.h"

class NYStyleCheesePizza : public Pizza {
public:
    NYStyleCheesePizza() : PIZZA_NAME {}

    void Prepare() override { cout << "Prepare " << name << endl; }
};
#endif // DESIGNPATTERN_NYSTYLECHEESEPIZZA_H
