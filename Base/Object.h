//
// Created by Qingzhen Han on 2023-07-04.
//

#ifndef DESIGNPATTERN_OBJECT_H
#define DESIGNPATTERN_OBJECT_H

#include <iostream>
#include <string>
#include "Log.h"
#define CLASS_NAME Object(__func__)

using namespace std;

class Object {
protected:
    string name;

public:
    Object(const string& className) : name(move(className)) {
        Log::d("Create  " + name);
    }

    void Log(const string& str) const{
        Log::d(str);
    }
};
#endif // DESIGNPATTERN_OBJECT_H
