#pragma once

#include "Query/Query.h"
#include "Query/QueryBase.h"
class BinaryQuery : public QueryBase {
protected:
    BinaryQuery(const string& name, const Query& l, const Query& r, string s)
    :QueryBase(name), lhs(l), rhs(r), opSym(s) {}
    Query lhs, rhs;
    string opSym;
    string Rep() const { return "(" + lhs.Rep() + opSym + rhs.Rep() + ")"; }
};