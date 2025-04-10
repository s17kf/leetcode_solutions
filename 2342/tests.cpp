//
// Created by stefan on 1/22/25.
//

#include "gtest/gtest.h"

#include "Solution.h"
#include <vector>

using namespace std;

class Tests_2342 : public ::testing::Test {
};

TEST_F(Tests_2342, test_1) {
    vector nums = {18,43,36,13,7};

    ASSERT_EQ(54, Solution().maximumSum(nums));
}

TEST_F(Tests_2342, test_2) {
    vector nums = {10,12,19,14};

    ASSERT_EQ(-1, Solution().maximumSum(nums));
}
