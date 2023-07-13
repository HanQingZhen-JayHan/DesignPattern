//
// Created by Qingzhen Han on 2023-07-04.
//

#ifndef DESIGNPATTERN_OBJECT_H
#define DESIGNPATTERN_OBJECT_H

#include "Log.h"
#include <iostream>
#include <string>
#define CLASS_NAME Object(__func__)

using namespace std;

class Object {
protected:
    string name;

public:
    Object(const string& className) : name(move(className)) {
        Log::d("Create  " + name);
    }
    virtual ~Object() = default;
    Object() = default;
    void Log(const string& str) const { Log::d(str); }
};
#endif // DESIGNPATTERN_OBJECT_H
