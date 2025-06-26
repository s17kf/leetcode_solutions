//
// Created by stefan on 1/21/25.
//

#ifndef SOLUTION_H
#define SOLUTION_H

using namespace std;

class Solution {
public:
    int longestSubsequence(string s, int k) {
        string binaryK = toBinaryString(k);
        int firstOne = s.find_first_of('1');
        int initialSize = s.size();
        int removedCount = 0;

        while (firstOne != string::npos) {
            s.erase(0, firstOne);
            if (binaryK.size() > s.size()) {
                return initialSize - removedCount;
            }
            if (binaryK.size() == s.size() && binaryK >= s) {
                return initialSize - removedCount;
            }
            firstOne = s.find_first_of('1', 1);
            ++removedCount;
        }
        return initialSize - removedCount;
    }

private:
    std::string toBinaryString(int &value) {
        std::string result;
        while (value) {
            result.insert(result.begin(), (value % 2) ? '1' : '0');
            value >>= 1;
        }
        return result.empty() ? "0" : result;
    }
};


#endif //SOLUTION_H
