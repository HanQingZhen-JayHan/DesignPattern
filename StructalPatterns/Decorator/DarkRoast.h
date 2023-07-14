#pragma once

#include "Decorator/Beverage.h"
class DarkRoast : public Beverage {
public:
    DarkRoast() : Beverage(__func__) {}
    double Cost() const { return 0.99; }
};