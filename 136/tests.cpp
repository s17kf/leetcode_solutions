//
// Created by stefan on 1/22/25.
//

#include "gtest/gtest.h"

#include "Solution.h"
#include <vector>

using namespace std;

class Tests_136 : public ::testing::Test {
};

TEST_F(Tests_136, test_1) {
    vector nums = {2,2,1};

    ASSERT_EQ(1, Solution().singleNumber(nums));
}

TEST_F(Tests_136, test_2) {
    vector nums = {4,1,2,1,2};

    ASSERT_EQ(4, Solution().singleNumber(nums));
}

TEST_F(Tests_136, test_3) {
    vector nums = {1};

    ASSERT_EQ(1, Solution().singleNumber(nums));
}

TEST_F(Tests_136, test_4) {
    vector nums = {1,2,5,-22,-459,1,-10,2,5,-22,-459};

    ASSERT_EQ(-10, Solution().singleNumber(nums));
}


