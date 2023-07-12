//
// Created by Qingzhen Han on 2023-07-06.
//

#ifndef DESIGNPATTERN_TEXTQUERY_H
#define DESIGNPATTERN_TEXTQUERY_H

#include "../Base/Object.h"
#include "QueryResult.h"
#include <fstream>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <vector>


class TextQuery : public Object {
public:
    TextQuery(ifstream& is) : CLASS_NAME, file(new vector<string>) {
        string text;
        while(getline(is, text)) {
            file->push_back(text);
            int n = file->size() - 1; // the current line number
            istringstream line(text);
            //for test
            cout << n << " : " << text << endl;
            string word;
            while(line >> word) {
                auto& lines = wordMap[word];
                if(!lines) {
                    lines.reset(new set<line_no>);
                }
                lines->insert(n);
            }
        }
        // for test
        for(auto map : wordMap) {
            int len = map.second->size();
            Log(map.first + " : " + to_string(len));
        }
    }

    QueryResult Query(const string& str) const {
        static shared_ptr<set<line_no>> noData(new set<line_no>);
        auto loc = wordMap.find(str);
        if(loc == wordMap.end()) {
            return QueryResult(str, noData, file);
        } else {
            return QueryResult(str, loc->second, file);
        }
    }

private:
    map<string, shared_ptr<set<line_no>>> wordMap;
    shared_ptr<vector<string>> file;
};

#endif // DESIGNPATTERN_TEXTQUERY_H
