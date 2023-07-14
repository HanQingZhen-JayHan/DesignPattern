//
// Created by Qingzhen Han on 2023-07-03.
//

#ifndef DESIGNPATTERN_PIZZA_H
#define DESIGNPATTERN_PIZZA_H

#include "../Base/Object.h"
class Pizza : public Object {
public:
    Pizza(const string& n) : Object(n) {}
    virtual void Prepare() = 0;
    void Bake() { Log("Bake    " + name); }
    void Cut() { Log("Cut     " + name); }
    void Box() { Log("Box     " + name); }
};
#endif // DESIGNPATTERN_PIZZA_H
