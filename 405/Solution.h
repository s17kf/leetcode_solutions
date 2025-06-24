//
// Created by stefan on 1/21/25.
//

#ifndef SOLUTION_H
#define SOLUTION_H

using namespace std;

class Solution {
public:
    string toHex(int num) {
        if (num == 0) {
            return "0";
        }
        int mask = 0xF;
        string digits = "0123456789abcdef";
        string result = "";
        for (int i = 0; i < 8; ++i) {
            char hexChar = num & mask;
            result = digits[hexChar] + result;
            num >>= 4;
        }
        while (result[0] == '0') {
            result.erase(result.begin());
        }
        return result;
    }
};


#endif //SOLUTION_H
