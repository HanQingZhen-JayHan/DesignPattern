#pragma once

#include "Object.h"
#define Beverage(__func__) Beverage(__func__)
class Beverage : public Object {
private:
    const string description;

protected:
    virtual ~Beverage() = default;

public:
    Beverage(const string& des) : Object(des), description(des) {}
    virtual string GetDescription() const { return description; }
    virtual double Cost() const = 0;
};