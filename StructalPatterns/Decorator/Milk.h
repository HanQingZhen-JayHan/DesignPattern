#pragma once

#include "Decorator/Beverage.h"
#include "Decorator/CondimentDecorator.h"
#include <utility>
class Milk : public CondimentDecorator {
public:
    Milk(Beverage& beverage) : CondimentDecorator(__func__, beverage) {}
    double Cost() const { return 0.1 + beverage.Cost(); }
    string GetDescription() const {
        return beverage.GetDescription() + ", Milk";
    }
};