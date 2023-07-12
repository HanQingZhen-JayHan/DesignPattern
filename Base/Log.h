#pragma once

#include <iostream>
#include <string>
using namespace std;
class Log {
public:
    inline static bool debug = true;
    static void d(const string& str) {
        if(debug) {
            Print(str);
        }
    }

private:
    Log() {}
    inline static string TAG = "my ";
    static void Print(const string& str) { cout << TAG << str << endl; }
};