//
// Created by stefan on 1/22/25.
//

#include "gtest/gtest.h"

#include "Solution.h"
#include <vector>

using namespace std;

class Tests_1910 : public ::testing::Test {
};

TEST_F(Tests_1910, test_1) {
    string s = "daabcbaabcbc", part = "abc";

    ASSERT_EQ("dab", Solution().removeOccurrences(s, part));
}

TEST_F(Tests_1910, test_2) {
    string s = "axxxxyyyyb", part = "xy";

    ASSERT_EQ("ab", Solution().removeOccurrences(s, part));
}

TEST_F(Tests_1910, test_3) {
    string s = "eemckxmckx", part = "emckx";

    ASSERT_EQ("", Solution().removeOccurrences(s, part));
}
