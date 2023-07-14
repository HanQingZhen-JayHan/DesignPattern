#pragma once

#include "../Base/Test.h"
#include "../Milk.h"
#include "../Soy.h"
#include "../Whip.h"
#include "Decorator/Beverage.h"
#include "Decorator/DarkRoast.h"
#include "Decorator/Decaf.h"
#include "Decorator/Espresso.h"
#include "Decorator/HouseBlend.h"
#include <string>
class DecoratorTest : public Test {
public:
    DecoratorTest() : Test(__func__) {}
    void Run() const {

        Beverage* bev1 = new Milk(*new Soy(*new Whip(*new Espresso())));
        Beverage* bev2 = new Milk(*new Soy(*new Whip(*new HouseBlend())));
        Beverage* bev3 = new Milk(*new Soy(*new Whip(*new Decaf())));
        Beverage* bev4 = new Milk(*new Soy(*new Whip(*new DarkRoast())));

        Print(bev1);
        Print(bev2);
        Print(bev3);
        Print(bev4);
    }
    void Print(Beverage* bev) const {
        Log(bev->GetDescription() + " $" + to_string(bev->Cost()));
    }
};