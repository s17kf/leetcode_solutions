//
// Created by stefan on 1/22/25.
//

#include "gtest/gtest.h"

#include "Solution.h"
#include <vector>

using namespace std;

class Tests_1765 : public ::testing::Test {
};

TEST_F(Tests_1765, test_1) {
    vector<vector<int>> input {{0,1},{0,0}};
    const vector<vector<int>> output {{1,0},{2,1}};

    ASSERT_EQ(output, Solution().highestPeak(input));
}

TEST_F(Tests_1765, test_2) {
    vector<vector<int>> input {{0,0,1},{1,0,0},{0,0,0}};
    const vector<vector<int>> output {{1,1,0},{0,1,1},{1,2,2}};

    ASSERT_EQ(output, Solution().highestPeak(input));
}