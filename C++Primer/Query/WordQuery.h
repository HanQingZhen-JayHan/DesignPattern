#pragma once

#include "Query/Query.h"
#include "Query/QueryBase.h"
#include "Query/QueryResult.h"
#include "Query/TextQuery.h"
class WordQuery : public QueryBase {
    friend class Query;
    string queryWord;
    WordQuery(const string& s) : queryWord(s) {}
    QueryResult Eval(const TextQuery& t) const { return t.Query(queryWord); }
    string Rep() const { return queryWord; }
};