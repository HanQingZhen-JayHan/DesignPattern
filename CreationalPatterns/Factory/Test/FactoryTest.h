//
// Created by Qingzhen Han on 2023-07-06.
//

#ifndef DESIGNPATTERN_FACTORYTEST_H
#define DESIGNPATTERN_FACTORYTEST_H

#include "../Base/Test.h"
#include "../FactoryMethod/ChicagoPizzaStore.h"
#include "../FactoryMethod/NYPizzaStore.h"

class FactoryTest : public Test {
public:
    FactoryTest() : Test(__func__) {}

    void Run() const override {
        NYPizzaStore nyPizzaStore;
        ChicagoPizzaStore chicagoPizzaStore;
        PizzaStore& pizzaStore = nyPizzaStore;
        pizzaStore.OrderPizza("Cheese");
        PizzaStore* store = &chicagoPizzaStore;
        store->OrderPizza("Cheese");
    }
};

#endif // DESIGNPATTERN_FACTORYTEST_H
