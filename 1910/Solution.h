//
// Created by stefan on 1/21/25.
//

#ifndef SOLUTION_H
#define SOLUTION_H

using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        size_t pos = s.find(part);
        while (pos != string::npos) {
            s.replace(pos, part.size(), "");
            pos = s.find(part, pos < part.size() ? 0 : pos - part.size() + 1);
        }

        return s;
    }
};


#endif //SOLUTION_H
