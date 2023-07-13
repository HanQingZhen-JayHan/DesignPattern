#pragma once

#include "Query/BinaryQuery.h"
#include "Query/Query.h"
#include "Query/QueryBase.h"
#include "Query/QueryResult.h"
#include "Query/TextQuery.h"
#include <algorithm>
#include <iterator>
#include <memory>
#include <type_traits>

class AndQuery : public BinaryQuery {
    friend Query operator&(const Query&, const Query&);
    AndQuery(const Query& left, const Query& right)
    : BinaryQuery(left, right, "&") {}
    QueryResult Eval(const TextQuery& t) const {
        auto left = lhs.Eval(t), right = rhs.Eval(t);
        auto ret_lines = make_shared<set<line_no>>();
        set_intersection(left.begin(), left.end(), right.begin(), right.end(),
        inserter(*ret_lines, ret_lines->begin()));
        return QueryResult(Rep(), ret_lines, left.GetFile());
    }
};

inline Query operator&(const Query& lhs, const Query& rhs) {
    return shared_ptr<QueryBase>(new AndQuery(lhs, rhs));
}