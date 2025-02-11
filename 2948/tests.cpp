//
// Created by stefan on 1/22/25.
//

#include "gtest/gtest.h"

#include "Solution.h"
#include <vector>

using namespace std;

class Tests_2948 : public ::testing::Test {
};

TEST_F(Tests_2948, test_1) {
    vector<int> nums{1,5,3,9,8};
    vector<int> expectedOut{1,3,5,8,9};

    ASSERT_EQ(expectedOut, Solution().lexicographicallySmallestArray(nums, 2));
}

TEST_F(Tests_2948, test_2) {
    vector<int> nums{1,7,6,18,2,1};
    vector<int> expectedOut{1,6,7,18,1,2};

    ASSERT_EQ(expectedOut, Solution().lexicographicallySmallestArray(nums, 3));
}


TEST_F(Tests_2948, test_3) {
    vector<int> nums{1,7,28,19,10};
    vector<int> expectedOut{1,7,28,19,10};

    ASSERT_EQ(expectedOut, Solution().lexicographicallySmallestArray(nums, 3));
}

TEST_F(Tests_2948, test_4) {
    vector<int> nums{4,52,38,59,71,27,31,83,88,10};
    vector<int> expectedOut{4,27,31,38,52,59,71,83,88,10};

    ASSERT_EQ(expectedOut, Solution().lexicographicallySmallestArray(nums, 14));
}


