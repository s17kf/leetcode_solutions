//124
// Created by stefan on 1/21/25.
//

#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <string>
#include <cmath>

using namespace std;

class Solution {
public:
    long long numberOfPowerfulInt(long long start, long long finish, int limit, string s) {
        char limitC = '0' + limit;
        long long x = stoll(s);

        string finishStr = to_string(finish);
        string startStr = to_string(start);

        if (x > finish) {
            return 0;
        }


        long long result = countPowerfulNumsLessThan(s, finishStr, limit);

        // if (x < start) {
        //     result -= countPowerfulNumsLessThan(s, startStr, limit);
        // }

        // long long missingNumbers = 1;
        // for (int i = firstIndex; i > 0; --i) {
        //     missingNumbers *= min(limit + 1, finishStr[i] - '0' + 1);
        // }
        //
        // result += missingNumbers - 1;





        return result;
    }

    long long countPowerfulNumsLessThan(string s, string finishStr, int limit) {
        if (s.length() == finishStr.length()) {
            if (s < finishStr) {
                return 1;
            }
            return 0;
        }

        long long result = 1;

        int firstIndex = finishStr.length() - s.length() - 1;

        for (int i = firstIndex; i > 0; --i) {
            result *= limit + 1;
        }

        if (finishStr[0] - '0' > limit) {
            return result * (limit + 1);
        }

        result *= finishStr[0] - '0';


        // long long missingNumbers = 1;
        // for (int i = firstIndex; i > 0; --i) {
        //     missingNumbers *= limit + 1;
        // }
        // result += missingNumbers - 1;

        long long tooBigNums = 1;

        // long long tooBigNums = 0;
        // long long tooBigNumsLessDigits = 1;
        // if (s[0] <= finishStr[firstIndex + 1] && s[0] - '0' <= limit) {
        //     tooBigNumsLessDigits = finishStr[firstIndex + 1] - s[0];
        //     if (finishStr.substr(firstIndex + 2) == s.substr(1)) {
        //         ++tooBigNumsLessDigits;
        //     }
        // }
        // for (int i = firstIndex; i > 0; --i) {
        //     if (finishStr[i] - '0' > limit) {
        //         continue;
        //     }
        //
        //     tooBigNumsLessDigits *= limit - (finishStr[i] - '0');
        //     tooBigNums += tooBigNumsLessDigits;
        // }
        // result -= tooBigNums;

        return result;
    }

    long long countIterative(long long first, long long last, int limit, string s) {
        long long result = 0;
        for (long long i = first; i <= last; ++i) {
            string str = to_string(i);
            if (str.length() != s.length()) {
                continue;
            }
            bool isPowerful = true;
            for (int j = 0; j < str.length(); ++j) {
                if (str[j] > s[j] + limitC) {
                    isPowerful = false;
                    break;
                }
            }
            if (isPowerful) {
                ++result;
            }
        }
        return result;
    }
};


#endif //SOLUTION_H
