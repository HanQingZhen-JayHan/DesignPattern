//
// Created by Qingzhen Han on 2023-07-06.
//

#ifndef DESIGNPATTERN_TEST_H
#define DESIGNPATTERN_TEST_H

#include "Object.h"

#define TEST_NAME Test(__func__)

class Test : public Object {
public:
    Test(const string name) : CLASS_NAME {
        cout << "----------- Test " << name << " -----------" << endl;
    }

    virtual void Run() const = 0;
};

#endif // DESIGNPATTERN_TEST_H
