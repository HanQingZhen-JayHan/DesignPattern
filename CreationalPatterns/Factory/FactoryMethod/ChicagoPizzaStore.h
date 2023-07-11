//
// Created by Qingzhen Han on 2023-07-04.
//

#ifndef DESIGNPATTERN_CHICAGOPIZZASTORE_H
#define DESIGNPATTERN_CHICAGOPIZZASTORE_H

#include "PizzaStore.h"
#include "ChicagoStyleCheesePizza.h"
#include "ChicagoStylePepperoniPizza.h"

class ChicagoPizzaStore: public PizzaStore{
private:
    Pizza* CreatePizza(const string& type) override {
        Pizza* pizza = nullptr;
        if(type == "Cheese"){
            pizza = new ChicagoStyleCheesePizza();
        }else if(type == "Pepperoni"){
            pizza = new ChicagoStylePepperoniPizza();
        }
        return pizza;
    }
public:
    ChicagoPizzaStore() : PIZZA_STORE_NAME {}

};
#endif //DESIGNPATTERN_CHICAGOPIZZASTORE_H
