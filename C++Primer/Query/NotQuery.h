#pragma once

#include "Query/Query.h"
#include "Query/QueryBase.h"
#include "Query/QueryResult.h"
#include "Query/TextQuery.h"
#include <memory>
class NotQuery : public QueryBase {
    friend Query operator~(const Query&);
    Query query;
    NotQuery(const Query& q) : query(q) {}
    string Rep() const { return "~(" + query.Rep() + ")"; }
    QueryResult Eval(const TextQuery& t) const {
        auto res = query.Eval(t);
        auto retLines = make_shared<set<line_no>>();
        auto begin = res.begin(), end = res.end();
        auto sz = res.GetFile()->size();
        for(auto n = 0; n != sz; ++n) {
            if(begin == end || *begin != n) {
                retLines->insert(n);
            } else {
                ++begin;
            }
        }
        return QueryResult(Rep(), retLines, res.GetFile());
    }
};

inline Query operator~(const Query& operand) {
    return shared_ptr<QueryBase>(new NotQuery(operand));
}