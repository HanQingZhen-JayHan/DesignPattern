#pragma once

#include "Decorator/Beverage.h"
#include "Decorator/CondimentDecorator.h"
#include <utility>
class Mocha : public CondimentDecorator {
public:
    Mocha(Beverage& beverage) : CondimentDecorator(__func__, beverage) {}
    double Cost() const { return 0.2 + beverage.Cost(); }
    string GetDescription() const {
        return beverage.GetDescription() + ", Mocha";
    }
};