//
// Created by stefan on 1/22/25.
//

#include "gtest/gtest.h"

#include "Solution.h"
#include <vector>

using namespace std;

class Tests_2661 : public ::testing::Test {
};

TEST_F(Tests_2661, test_1) {
    vector<int> arr{1,3,4,2};
    vector<vector<int>> mat {{1,4},{2,3}};

    ASSERT_EQ(2, Solution().firstCompleteIndex(arr, mat));
}

TEST_F(Tests_2661, test_2) {
    vector<int> arr{2,8,7,4,1,3,5,6,9};
    vector<vector<int>> mat {{3,2,5},{1,4,6},{8,7,9}};

    ASSERT_EQ(3, Solution().firstCompleteIndex(arr, mat));
}
