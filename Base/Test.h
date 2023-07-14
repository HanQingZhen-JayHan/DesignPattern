//
// Created by Qingzhen Han on 2023-07-06.
//

#ifndef DESIGNPATTERN_TEST_H
#define DESIGNPATTERN_TEST_H

#include "Object.h"

class Test : public Object {
public:
    Test(const string name) : Object(__func__) {
        Log("----------- Test " + name + " -----------");
    }

    virtual void Run() const = 0;
};

#endif // DESIGNPATTERN_TEST_H
