#pragma once
#include "../Base/Test.h"
#include <fstream>
#include <string>
class IOTest : public Test {
public:
    IOTest() : Test(__func__) {}
    void Run() const override {
        Log("Test write operations.");
        Write(path);
        Log("Test read operations.");
        Read(path);
    }
    const string path = "../C++Primer/IO/test.txt";
    void Write(const string& path) const {
        Log("FilePath: " + path);
        ofstream out;
        out.open(path);
        out << "The root is in the build folder and along with the executable "
               "file.";
        out.close();
    }
    void Read(const string& path) const {
        Log("FilePath: " + path);
        ifstream in(path);
        string text;
        while(getline(in, text)) {
            Log(text);
        }
    }
};