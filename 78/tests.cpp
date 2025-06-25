//
// Created by stefan on 1/22/25.
//

#include "gtest/gtest.h"

#include "Solution.h"
#include <vector>

using namespace std;

class Tests_78 : public ::testing::Test {
};

TEST_F(Tests_78, test_1) {
    vector seats = {1,2,3};

    vector<vector<int>> expected = {
        {},
        {1},
        {2},
        {3},
        {1, 2},
        {1, 3},
        {2,3},
        {1, 2, 3}
    };
    sort(expected.begin(), expected.end());

    auto result = Solution().subsets(seats);
    sort(result.begin(), result.end());

    ASSERT_EQ(expected, result);
}

TEST_F(Tests_78, test_2) {
    vector seats = {0};
    vector<vector<int>> expected = {
        {},
        {0}
    };
    sort(expected.begin(), expected.end());

    auto result = Solution().subsets(seats);
    sort(result.begin(), result.end());

    ASSERT_EQ(expected, result);
}

//TEST_F(Tests_78, test_3) {
//    vector seats = {0,1};
//
//    ASSERT_EQ(1, Solution().maxDistToClosest(seats));
//}

//TEST_F(Tests_78, test_4) {
//    vector nums = {1,2,5,-22,-459,1,-10,2,5,-22,-459};
//
//    ASSERT_EQ(-10, Solution().singleNumber(nums));
//}
