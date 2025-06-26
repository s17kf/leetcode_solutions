//
// Created by stefan on 1/22/25.
//

#include "gtest/gtest.h"

#include "Solution.h"
#include <vector>

using namespace std;

class Tests_2311 : public ::testing::Test {
};

TEST_F(Tests_2311, test_1) {
    string s = "1001010";
    int k = 5;

    ASSERT_EQ(5, Solution().longestSubsequence(s, k));
}

TEST_F(Tests_2311, test_2) {
    string s = "00101001";
    int k = 1;

    ASSERT_EQ(6, Solution().longestSubsequence(s, k));
}

TEST_F(Tests_2311, test_3) {
    string s = "1011";
    int k = 281854076;

    ASSERT_EQ(4, Solution().longestSubsequence(s, k));
}

//TEST_F(Tests_2311, test_4) {
//    vector nums = {1,2,5,-22,-459,1,-10,2,5,-22,-459};
//
//    ASSERT_EQ(-10, Solution().singleNumber(nums));
//}
