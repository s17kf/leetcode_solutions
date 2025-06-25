//
// Created by stefan on 1/21/25.
//

#ifndef SOLUTION_H
#define SOLUTION_H

using namespace std;

class Solution {
public:
    int singleNumber(vector<int> &nums) {
        int counters[32] = {0};
        for (int num: nums) {
            int mask = 1;
            for (int &counter: counters) {
                if (num & (mask)) {
                    counter++;
                }
                mask <<= 1;
            }
        }
        int result = 0;
        for (int i = 0; i < 32; ++i) {
            if (counters[i] % 3 != 0) {
                result |= (1 << i);
            }
        }

        return result;
    }
};


#endif //SOLUTION_H
