//
// Created by Qingzhen Han on 2023-07-04.
//

#ifndef DESIGNPATTERN_OBJECT_H
#define DESIGNPATTERN_OBJECT_H

#include <iostream>
#include <string>

#define CLASS_NAME Object(__func__)

using namespace std;

class Object {
protected:
    string name;
public:
    Object(const string &className) : name(move(className)) {
        cout << "Create  " << name << endl;
    }

};
#endif //DESIGNPATTERN_OBJECT_H
