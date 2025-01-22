//
// Created by stefan on 1/21/25.
//

#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    vector<vector<int> > highestPeak(vector<vector<int> > &isWater) {
        size_t rows = isWater.size();
        size_t cols = isWater[0].size();
        vector height(rows, vector<int>(cols, -1));
        queue<pair<int, int> > nexts;

        for (size_t row = 0; row < rows; ++row) {
            for (size_t col = 0; col < cols; ++col) {
                if (isWater[row][col]) {
                    height[row][col] = 0;
                    addNexts(row, col, height, nexts);
                }
            }
        }

        while (!nexts.empty()) {
            auto [row, col] = nexts.front();
            nexts.pop();
            addNexts(row, col, height, nexts);
        }

        return height;
    }

private:
    static void addNexts(size_t row, size_t col, vector<vector<int> > &height, queue<pair<int, int> > &nexts) {
        if (row > 0 && height[row - 1][col] == -1) {
            height[row - 1][col] = height[row][col] + 1;
            nexts.emplace(row - 1, col);
        }
        if (row < height.size() - 1 && height[row + 1][col] == -1) {
            height[row + 1][col] = height[row][col] + 1;
            nexts.emplace(row + 1, col);
        }
        if (col > 0 && height[row][col - 1] == -1) {
            height[row][col - 1] = height[row][col] + 1;
            nexts.emplace(row, col - 1);
        }
        if (col < height[0].size() - 1 && height[row][col + 1] == -1) {
            height[row][col + 1] = height[row][col] + 1;
            nexts.emplace(row, col + 1);
        }
    }
};


#endif //SOLUTION_H
