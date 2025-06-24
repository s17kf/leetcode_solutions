//
// Created by stefan on 1/21/25.
//

#ifndef SOLUTION_H
#define SOLUTION_H

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = -1;
        for (int num : nums) {
            result ^= num;
        }
        return ~result;
    }
};


#endif //SOLUTION_H
