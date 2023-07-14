#pragma once

#include "Decorator/Beverage.h"
class Espresso : public Beverage {
public:
    Espresso() : Beverage(__func__) {}
    double Cost() const { return 1.99; }
};