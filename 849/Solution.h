//
// Created by stefan on 1/21/25.
//

#ifndef SOLUTION_H
#define SOLUTION_H

using namespace std;

class Solution {
public:
    int maxDistToClosest(vector<int> &seats) {
        int i = 0;
        while (seats[i] == 0) {
            ++i;
        }
        int result = i;
        int lastOccupied = i++;
        for (; i < seats.size(); ++i) {
            if (seats[i] == 0)
                continue;

            result = max(result, (i - lastOccupied) / 2);
            lastOccupied = i;
        }
        if (seats.back() == 0) {
            result = max(result, (int) seats.size() - 1 - lastOccupied);
        }
        return result;
    }
};


#endif //SOLUTION_H
