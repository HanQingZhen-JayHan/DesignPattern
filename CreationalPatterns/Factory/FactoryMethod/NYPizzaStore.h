//
// Created by Qingzhen Han on 2023-07-04.
//

#ifndef DESIGNPATTERN_NYPIZZASTORE_H
#define DESIGNPATTERN_NYPIZZASTORE_H

#include "NYStyleCheesePizza.h"
#include "NYStylePepperoniPizza.h"
#include "PizzaStore.h"

class NYPizzaStore : public PizzaStore {
private:
    Pizza* CreatePizza(const string& type) override {
        Pizza* pizza = nullptr;
        if(type == "Cheese") {
            pizza = new NYStyleCheesePizza();
        } else if(type == "Pepperoni") {
            pizza = new NYStylePepperoniPizza();
        }
        return pizza;
    }

public:
    NYPizzaStore() : PizzaStore(__func__) {}
};
#endif // DESIGNPATTERN_NYPIZZASTORE_H
