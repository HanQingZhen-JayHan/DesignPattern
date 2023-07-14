#pragma once

#include "Decorator/Beverage.h"
#include "Decorator/CondimentDecorator.h"
#include <utility>
class Soy : public CondimentDecorator {
public:
    Soy(Beverage& beverage) : CondimentDecorator(__func__, beverage) {}
    double Cost() const { return 0.15 + beverage.Cost(); }
    string GetDescription() const {
        return beverage.GetDescription() + ", Soy";
    }
};