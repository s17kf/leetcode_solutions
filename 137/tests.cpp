//
// Created by stefan on 1/22/25.
//

#include "gtest/gtest.h"

#include "Solution.h"
#include <vector>

using namespace std;

class Tests_137 : public ::testing::Test {
};

TEST_F(Tests_137, test_1) {
    vector nums = {2, 2, 3, 2};

    ASSERT_EQ(3, Solution().singleNumber(nums));
}

TEST_F(Tests_137, test_2) {
    vector nums = {0, 1, 0, 1, 0, 1, 99};

    ASSERT_EQ(99, Solution().singleNumber(nums));
}

//TEST_F(Tests_137, test_3) {
//    vector nums = {1};
//
//    ASSERT_EQ(1, Solution().singleNumber(nums));
//}
//
//TEST_F(Tests_137, test_4) {
//    vector nums = {1,2,5,-22,-459,1,-10,2,5,-22,-459};
//
//    ASSERT_EQ(-10, Solution().singleNumber(nums));
//}
