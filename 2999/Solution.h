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
    long long numberOfPowerfulInt(long long start, long long finish, int limit, const string &s) {
        long long x = stoll(s);
        int exp = s.size();
        long long div = pow(10, exp);
        char limitC = '0' + limit;
        long long result = 0;
        long long number;
        if (start < x) {
            number = x;
        } else {
            number = start - (start % div) + x;
            if (number < start)
                number += div;
        }

        long long div2 = div * 1000000;

        long long powerfulIntegersInDiv2 = 0;
        for (long long i = x; i < div2; i += div) {
            const string numberStr = to_string(i);
            if (none_of(numberStr.begin(), numberStr.end(), [&limitC](char c) { return c > limitC; }))
                ++powerfulIntegersInDiv2;
        }

        long long start2 = start - (start % div2) + div2;
        long long finish2 = finish - (finish % div2);
        for (int i = start2; i < finish2; i += div2) {
            const string numberStr = to_string(i);
            if (none_of(numberStr.begin(), numberStr.end(), [&limitC](char c) { return c > limitC; }))
                result += powerfulIntegersInDiv2;
        }

        if (start2 > finish2) {
            for (; number <= finish; number += div) {
                const string numberStr = to_string(number);
                if (none_of(numberStr.begin(), numberStr.end(), [&limitC](char c) { return c > limitC; }))
                    ++result;
            }
            return result;
        }

        for (; number < start2; number += div) {
            const string numberStr = to_string(number);
            if (none_of(numberStr.begin(), numberStr.end(), [&limitC](char c) { return c > limitC; }))
                ++result;
        }
        for (number = finish2 + x; number < finish; number += div) {
            const string numberStr = to_string(number);
            if (none_of(numberStr.begin(), numberStr.end(), [&limitC](char c) { return c > limitC; }))
                ++result;
        }

        return result;
    }
};


#endif //SOLUTION_H
