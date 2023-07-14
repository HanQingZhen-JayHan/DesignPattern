//
// Created by Qingzhen Han on 2023-07-06.
//

#ifndef DESIGNPATTERN_QUERY_H
#define DESIGNPATTERN_QUERY_H

#include "../Base/Object.h"
#include "Query/QueryBase.h"
#include "Query/QueryResult.h"
#include "Query/TextQuery.h"
#include "Query/WordQuery.h"

class Query : public Object {
    friend Query operator~(const Query&);
    friend Query operator|(const Query&, const Query&);
    friend Query operator&(const Query&, const Query&);

public:
    Query(const string& s) : Object(__func__), q(new WordQuery(s)){};
    QueryResult Eval(const TextQuery& t) const { return q->Eval(t); }
    string Rep() const { return q->Rep(); }

private:
    Query(shared_ptr<QueryBase> query) : Object(__func__), q(query) {}
    shared_ptr<QueryBase> q;
};

#endif // DESIGNPATTERN_QUERY_H
