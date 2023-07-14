#pragma once

#include "Decorator/Beverage.h"
class Decaf : public Beverage {
public:
    Decaf() : Beverage(__func__) {}
    double Cost() const { return 1.05; }
};