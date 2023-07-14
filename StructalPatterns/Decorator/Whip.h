#pragma once

#include "Decorator/Beverage.h"
#include "Decorator/CondimentDecorator.h"
#include <utility>
class Whip : public CondimentDecorator {
public:
    Whip(Beverage& beverage) : CondimentDecorator(__func__, beverage) {}
    double Cost() const { return 0.1 + beverage.Cost(); }
    string GetDescription() const {
        return beverage.GetDescription() + ", Whip";
    }
};