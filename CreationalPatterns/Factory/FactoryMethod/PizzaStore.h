//
// Created by Qingzhen Han on 2023-07-04.
//

#ifndef DESIGNPATTERN_PIZZASTORE_H
#define DESIGNPATTERN_PIZZASTORE_H

#include "../../Base/Object.h"
#include "Pizza.h"
#define PIZZA_STORE_NAME PizzaStore(__func__)
class PizzaStore: public Object{
private:
    virtual Pizza* CreatePizza(const string &type)=0;
public:
    PizzaStore(const string &n):Object(n){}

    Pizza* OrderPizza(const string type){
        Pizza* pizza = CreatePizza(type);
        pizza->Prepare();
        pizza->Bake();
        pizza->Cut();
        pizza->Box();
        return pizza;
    }
};
#endif //DESIGNPATTERN_PIZZASTORE_H
