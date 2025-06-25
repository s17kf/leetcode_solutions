//
// Created by stefan on 1/21/25.
//

#ifndef SOLUTION_H
#define SOLUTION_H

using namespace std;

class Solution {
public:
    int countPairs(vector<vector<int> > &coordinates, int k) {
        int result = 0;
        for (int i = 0; i < coordinates.size(); ++i) {
            for (int j = i + 1; j < coordinates.size(); ++j) {
                int distance = (coordinates[i][0] ^ coordinates[j][0]) + (coordinates[i][1] ^ coordinates[j][1]);
                if (distance == k) {
                    ++result;
                }
            }
        }
        return result;
    }
};


#endif //SOLUTION_H
