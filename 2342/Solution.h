//
// Created by stefan on 1/21/25.
//

#ifndef SOLUTION_H
#define SOLUTION_H
#include <list>

using namespace std;

class Solution {
public:
    int maximumSum(vector<int> &nums) {
        int maxSum = -1;
        map<int, int> digitsSumToMaxNumber;
        for (const int &num : nums) {
            int digitsSum = 0;
            int temp = num;
            while (temp > 0) {
                digitsSum += temp % 10;
                temp /= 10;
            }
            if (!digitsSumToMaxNumber.contains(digitsSum)) {
                digitsSumToMaxNumber[digitsSum] = num;
                continue;
            }
            int newSum = digitsSumToMaxNumber[digitsSum] + num;
            if (newSum > maxSum)
                maxSum = newSum;
            if (num > digitsSumToMaxNumber[digitsSum])
                digitsSumToMaxNumber[digitsSum] = num;
        }
        return maxSum;
    }
};


#endif //SOLUTION_H
