#pragma once

#include "Decorator/Beverage.h"
#include <memory>
#define CONDIMENT_NAME CondimentDecorator(__func__)
class CondimentDecorator : public Beverage {
protected:
    const Beverage& beverage;
    virtual string GetDescription() const = 0;

public:
    CondimentDecorator(const string& condiment, const Beverage& bev)
    : Beverage(condiment), beverage(bev) {}
};