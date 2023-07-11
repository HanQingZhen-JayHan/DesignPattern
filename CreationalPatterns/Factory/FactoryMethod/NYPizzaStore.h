//
// Created by Qingzhen Han on 2023-07-04.
//

#ifndef DESIGNPATTERN_NYPIZZASTORE_H
#define DESIGNPATTERN_NYPIZZASTORE_H

#include "PizzaStore.h"
#include "NYStyleCheesePizza.h"
#include "NYStylePepperoniPizza.h"

class NYPizzaStore: public PizzaStore{
private:
    Pizza* CreatePizza(const string &type) override {
        Pizza* pizza = nullptr;
        if(type=="Cheese"){
            pizza = new NYStyleCheesePizza();
        }else if(type=="Pepperoni"){
            pizza = new NYStylePepperoniPizza();
        }
        return pizza;
    }
public:
    NYPizzaStore() : PIZZA_STORE_NAME {}

};
#endif //DESIGNPATTERN_NYPIZZASTORE_H
