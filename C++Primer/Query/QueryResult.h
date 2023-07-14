//
// Created by Qingzhen Han on 2023-07-06.
//

#ifndef DESIGNPATTERN_QUERYRESULT_H
#define DESIGNPATTERN_QUERYRESULT_H

#include "../Base/Object.h"
#include <memory>
#include <set>
#include <vector>

using line_no = vector<string>::size_type;

string make_plural(size_t, const string&, const string&);
class QueryResult : public Object {
    friend ostream& print(ostream& os, const QueryResult& result);

private:
    string targetStr;
    shared_ptr<set<line_no>> lineNoSet;
    shared_ptr<vector<string>> file;

public:
    QueryResult(string str, shared_ptr<set<line_no>> lines, shared_ptr<vector<string>> file)
    : Object(__func__), targetStr(str), lineNoSet(lines), file(file) {}
    shared_ptr<vector<string>> GetFile() { return file; }
    set<line_no>::iterator begin() { return lineNoSet->begin(); }
    set<line_no>::iterator end() { return lineNoSet->end(); }
};

inline ostream& print(ostream& os, const QueryResult& qr) {
    os << qr.targetStr << " occurs " << qr.lineNoSet->size() << " "
       << make_plural(qr.lineNoSet->size(), "time", "s") << endl;
    for(auto num : *qr.lineNoSet) {
        os << "\t(line " << num + 1 << ") " << *(qr.file->begin() + num) << endl;
    }
    return os;
}

inline string make_plural(size_t ctr, const string& word, const string& ending) {
    return (ctr > 1) ? word + ending : word;
}

#endif // DESIGNPATTERN_QUERYRESULT_H
