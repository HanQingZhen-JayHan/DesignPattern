//
// Created by Qingzhen Han on 2023-07-06.
//

#ifndef DESIGNPATTERN_QUERYTEST_H
#define DESIGNPATTERN_QUERYTEST_H

#include "../AndQuery.h"
#include "../Base/Test.h"
#include "../NotQuery.h"
#include "../OrQuery.h"
#include "../TextQuery.h"
#include "Query/Query.h"
#include "Query/QueryResult.h"

class QueryTest : public Test {
public:
    QueryTest() : Test(__func__) {}

    void Run() const override {
        // the root is in the build fold
        // starts from build
        ifstream in("../C++Primer/Query/Test/story.txt");
        TextQuery textQuery(in);
        Query q = Query("Daddy") | Query("Alice") & ~Query("Alice");
        QueryResult result = q.Eval(textQuery);
        print(std::cout, result);

        Query q2 = Query("Alice") & ~Query("Alice") | Query("Daddy");
        QueryResult result2 = q2.Eval(textQuery);
        print(std::cout, result2);
    }
};

#endif // DESIGNPATTERN_QUERYTEST_H
