#pragma once

#include "Decorator/Beverage.h"
class HouseBlend : public Beverage {
public:
    HouseBlend() : Beverage(__func__) {}
    double Cost() const { return 0.89; }
};