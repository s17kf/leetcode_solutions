//
// Created by stefan on 1/21/25.
//

#ifndef SOLUTION_H
#define SOLUTION_H

using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result{{}};
        result.reserve(1 << nums.size()); // Reserve space for all subsets
        addSubsets(nums.begin(), nums.end(), result, vector<int>{});

        return result;
    }

private:
    void addSubsets(vector<int>::iterator numsBegin,
                    vector<int>::iterator numsEnd,
                    vector<vector<int>>& result,
                    vector<int>&& currentSubsetBase) {
        if (numsBegin == numsEnd) {
            return;
        }
        for (auto it = numsBegin; it != numsEnd; ++it) {
            vector<int> currentSubset = currentSubsetBase;
            currentSubset.emplace_back(*it);
            result.emplace_back(currentSubset);
            addSubsets(it + 1, numsEnd, result, std::move(currentSubset));
        }
    }
};


#endif //SOLUTION_H
