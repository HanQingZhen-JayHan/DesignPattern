//
// Created by Qingzhen Han on 2023-07-04.
//

#ifndef DESIGNPATTERN_OBJECT_H
#define DESIGNPATTERN_OBJECT_H

#include "Log.h"
#include <iostream>
#include <string>

using namespace std;

class Object {
protected:
    string name;
    virtual ~Object() = default;

public:
    Object(const string& className) : name(move(className)) {
        Log::d("Create  " + name);
    }

    Object() = default;
    void Log(const string& str) const { Log::d(str); }
};
#endif // DESIGNPATTERN_OBJECT_H
