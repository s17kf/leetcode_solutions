//
// Created by stefan on 1/21/25.
//

#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
    int countServers(vector<vector<int> > &grid) {
        size_t rows = grid.size();
        size_t cols = grid[0].size();
        size_t result = 0;

        for (size_t i = 0; i < rows; ++i) {
            size_t last_server_col = 0;
            size_t serversInRow = 0;
            for (size_t j = 0; j < cols; ++j) {
                if (grid[i][j] > 0) {
                    ++serversInRow;
                    last_server_col = j;
                    bool moreServersInCol = false;
                    if (grid[i][j] == 1) {
                        for (size_t i2 = i + 1; i2 < rows; ++i2) {
                            if (grid[i2][j] == 1) {
                                moreServersInCol = true;
                                grid[i2][j] = 2;
                            }
                        }
                    }
                    if (moreServersInCol)
                        grid[i][j] = 2;
                }
            }
            if (serversInRow == 1 && grid[i][last_server_col] == 1)
                --serversInRow;

            result += serversInRow;
        }

        return result;
    }
};


#endif //SOLUTION_H
