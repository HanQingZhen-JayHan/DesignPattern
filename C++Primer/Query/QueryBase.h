//
// Created by Qingzhen Han on 2023-07-06.
//

#ifndef DESIGNPATTERN_QUERYBASE_H
#define DESIGNPATTERN_QUERYBASE_H

#include "../Base/Object.h"
#include "Query/QueryResult.h"
#include "Query/TextQuery.h"

class QueryBase : public Object {
    friend class Query;

protected:
    virtual ~QueryBase() = default;

private:
    virtual QueryResult Eval(const TextQuery&) const = 0;
    virtual string Rep() const = 0;
};

#endif // DESIGNPATTERN_QUERYBASE_H
