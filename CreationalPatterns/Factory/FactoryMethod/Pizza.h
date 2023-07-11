//
// Created by Qingzhen Han on 2023-07-03.
//

#ifndef DESIGNPATTERN_PIZZA_H
#define DESIGNPATTERN_PIZZA_H

#include "../../Base/Object.h"
#define PIZZA_NAME Pizza(__func__)
class Pizza:public Object{
public:
    Pizza(const string& n):Object(n){}
    virtual void Prepare()=0;
    void Bake(){
        cout<<"Bake    "<<name<<endl;
    }
    void Cut(){
        cout<<"Cut     "<<name<<endl;
    }
    void Box(){
        cout<<"Box     "<<name<<endl;
    }
};
#endif //DESIGNPATTERN_PIZZA_H
