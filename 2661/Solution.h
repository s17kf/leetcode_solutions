//
// Created by stefan on 1/21/25.
//

#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        vector<int> paintedCellsByRows(rows);
        vector<int> paintedCellsByCols(cols);

        vector<pair<int, int>> numToMatIndices(rows * cols + 1);

        for (int row = 0; row < rows; ++row) {
            for (int col = 0; col < cols; ++col) {
                numToMatIndices[mat[row][col]] = {row, col};
            }
        }

        for (int i = 0; i < arr.size(); ++i) {
            const auto& [row, col] = numToMatIndices[arr[i]];
            ++paintedCellsByRows[row];
            ++paintedCellsByCols[col];
            if (paintedCellsByRows[row] == cols ||
                paintedCellsByCols[col] == rows) {
                return i;
                }
        }
        return 0;
    }
};



#endif //SOLUTION_H
