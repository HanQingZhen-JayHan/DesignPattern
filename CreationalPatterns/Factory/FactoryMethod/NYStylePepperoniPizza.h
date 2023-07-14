//
// Created by Qingzhen Han on 2023-07-04.
//

#ifndef DESIGNPATTERN_NYSTYLEPEPPERONIPIZZA_H
#define DESIGNPATTERN_NYSTYLEPEPPERONIPIZZA_H

#include "Pizza.h"

class NYStylePepperoniPizza : public Pizza {
public:
    NYStylePepperoniPizza() : Pizza(__func__) {}

    void Prepare() override { Log("Prepare " + name); }
};
#endif // DESIGNPATTERN_NYSTYLEPEPPERONIPIZZA_H
