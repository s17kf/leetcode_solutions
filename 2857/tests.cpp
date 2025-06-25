//
// Created by stefan on 1/22/25.
//

#include "gtest/gtest.h"

#include "Solution.h"
#include <vector>

using namespace std;

class Tests_2857 : public ::testing::Test {
};

TEST_F(Tests_2857, test_1) {
    vector<vector<int> > coordinates = {{1, 2}, {4, 2}, {1, 3}, {5, 2}};
    int k = 5;

    ASSERT_EQ(2, Solution().countPairs(coordinates, k));
}

TEST_F(Tests_2857, test_2) {
    vector<vector<int> > coordinates = {{1, 3}, {1, 3}, {1, 3}, {1, 3}, {1, 3}};
    int k = 0;

    ASSERT_EQ(10, Solution().countPairs(coordinates, k));
}

// TEST_F(Tests_2857, test_3) {
//     vector seats = {0,1};
//
//     ASSERT_EQ(1, Solution().maxDistToClosest(seats));
// }

//TEST_F(Tests_2857, test_4) {
//    vector nums = {1,2,5,-22,-459,1,-10,2,5,-22,-459};
//
//    ASSERT_EQ(-10, Solution().singleNumber(nums));
//}
