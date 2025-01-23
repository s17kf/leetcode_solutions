//
// Created by stefan on 1/22/25.
//

#include "gtest/gtest.h"

#include "Solution.h"
#include <vector>

using namespace std;

class Tests_1267 : public ::testing::Test {
};

TEST_F(Tests_1267, test_1) {
    vector<vector<int>> input {{1,0},{0,1}};

    ASSERT_EQ(0, Solution().countServers(input));
}

TEST_F(Tests_1267, test_2) {
    vector<vector<int>> input {{1, 0},{1, 1}};

    ASSERT_EQ(3, Solution().countServers(input));
}

TEST_F(Tests_1267, test_3) {
    vector<vector<int>> input {{1,1,0,0},{0,0,1,0},{0,0,1,0},{0,0,0,1}};

    ASSERT_EQ(4, Solution().countServers(input));
}

TEST_F(Tests_1267, test_4) {
    vector<vector<int>> input {{1,0,0,1,0},{0,0,0,0,0},{0,0,0,1,0}};

    ASSERT_EQ(3, Solution().countServers(input));
}
