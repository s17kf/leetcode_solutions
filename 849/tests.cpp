//
// Created by stefan on 1/22/25.
//

#include "gtest/gtest.h"

#include "Solution.h"
#include <vector>

using namespace std;

class Tests_849 : public ::testing::Test {
};

TEST_F(Tests_849, test_1) {
    vector seats = {1,0,0,0,1,0,1};

    ASSERT_EQ(2, Solution().maxDistToClosest(seats));
}

TEST_F(Tests_849, test_2) {
    vector seats = {1,0,0,0};

    ASSERT_EQ(3, Solution().maxDistToClosest(seats));
}

TEST_F(Tests_849, test_3) {
    vector seats = {0,1};

    ASSERT_EQ(1, Solution().maxDistToClosest(seats));
}

//TEST_F(Tests_849, test_4) {
//    vector nums = {1,2,5,-22,-459,1,-10,2,5,-22,-459};
//
//    ASSERT_EQ(-10, Solution().singleNumber(nums));
//}
