//
// Created by stefan on 1/22/25.
//

#include "gtest/gtest.h"

#include "Solution.h"
#include <vector>

using namespace std;

class Tests_405 : public ::testing::Test {
};

TEST_F(Tests_405, test_1) {
    int num = 26;

    ASSERT_EQ("1a", Solution().toHex(num));
}

TEST_F(Tests_405, test_2) {
    int num = -1;

    ASSERT_EQ("ffffffff", Solution().toHex(num));
}
