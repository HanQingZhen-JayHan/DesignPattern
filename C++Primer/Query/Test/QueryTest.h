//
// Created by Qingzhen Han on 2023-07-06.
//

#ifndef DESIGNPATTERN_QUERYTEST_H
#define DESIGNPATTERN_QUERYTEST_H

#include "../Base/Test.h"
#include "../TextQuery.h"

class QueryTest : public Test {
public:
    QueryTest() : TEST_NAME {}

    void Run() const override {
        ifstream in("./Query/Test/story.txt");
        ofstream out;
        out.open("test.txt");
        out << "Hello";
        out.close();
        TextQuery textQuery(ifstream);
    }
};

#endif // DESIGNPATTERN_QUERYTEST_H
