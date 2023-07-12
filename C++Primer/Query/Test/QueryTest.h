//
// Created by Qingzhen Han on 2023-07-06.
//

#ifndef DESIGNPATTERN_QUERYTEST_H
#define DESIGNPATTERN_QUERYTEST_H

#include "../Base/Test.h"
#include "../TextQuery.h"
#include "Query/QueryResult.h"

class QueryTest : public Test {
public:
    QueryTest() : TEST_NAME {}

    void Run() const override {
        //the root is in the build fold
        //starts from build
        ifstream in("../C++Primer/Query/Test/story.txt");
        TextQuery textQuery(in);
        QueryResult result = textQuery.Query("Daddy");
        print(std::cout, result);
    }
};

#endif // DESIGNPATTERN_QUERYTEST_H
