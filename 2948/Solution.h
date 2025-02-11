//
// Created by stefan on 1/21/25.
//

#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int> &nums, int limit) {
        const int n = nums.size();
        const set<int> sortedNums(nums.begin(), nums.end());
        map<int, int> minSwapableMap;
        for (auto it = sortedNums.begin(); it != sortedNums.end();) {
            auto next = it;
            int maxSwapable = *it;
            while (++next != sortedNums.end() && *next - maxSwapable <= limit) {
                maxSwapable = *next;
            }
            minSwapableMap.emplace(maxSwapable, *it);
            it = next;
        }

        if (minSwapableMap.size() == sortedNums.size())
            return nums;

        for (int i = 0; i < n; ++i) {
            const auto minSwapable = minSwapableMap.lower_bound(nums[i])->second;
            if (minSwapable == nums[i])
                continue;
            for (int j = n - 1; j > i; --j) {
                if (nums[i] <= nums[j] || minSwapable > nums[j])
                    continue;
                swap(nums[i], nums[j]);
                if (minSwapable == nums[i])
                    break;
            }
        }


        return move(nums);
    }
};


#endif //SOLUTION_H
