#pragma once

#include "Query/BinaryQuery.h"

#include "Query/Query.h"
#include "Query/QueryBase.h"
#include "Query/QueryResult.h"
#include "Query/TextQuery.h"
#include <memory>
class OrQuery : public BinaryQuery {
    friend Query operator|(const Query&, const Query&);
    OrQuery(const Query& left, const Query& right)
    : BinaryQuery(left, right, "|") {}
    QueryResult Eval(const TextQuery& t) const {
        auto left = lhs.Eval(t), right = rhs.Eval(t);
        auto ret_lines = make_shared<set<line_no>>(left.begin(), left.end());
        ret_lines->insert(right.begin(), right.end());
        return QueryResult(Rep(), ret_lines, left.GetFile());
    }
};

inline Query operator|(const Query& lhs, const Query& rhs) {
    return shared_ptr<QueryBase>(new OrQuery(lhs, rhs));
}