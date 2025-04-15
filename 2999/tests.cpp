//
// Created by stefan on 1/22/25.
//

#include "gtest/gtest.h"

#include "Solution.h"
#include <vector>

using namespace std;

class Tests_2999 : public ::testing::Test {
};

TEST_F(Tests_2999, test_1) {
  long long start = 1;
  long long finish = 6000;
  long long limit = 4;
  string s = "124";
  ASSERT_EQ(5, Solution().numberOfPowerfulInt(start, finish, limit, s));
}

TEST_F(Tests_2999, test_2) {
    long long start = 15;
    long long finish = 215;
    long long limit = 6;
    string s = "10";
    ASSERT_EQ(2, Solution().numberOfPowerfulInt(start, finish, limit, s));
}

TEST_F(Tests_2999, test_3) {
    long long start = 1000;
    long long finish = 2000;
    long long limit = 4;
    string s = "3000";
    ASSERT_EQ(0, Solution().numberOfPowerfulInt(start, finish, limit, s));
}

TEST_F(Tests_2999, test_4) {
    long long start = 1829505;
    long long finish = 1255574165;
    long long limit = 7;
    string s = "14132";
    ASSERT_EQ(5470, Solution().numberOfPowerfulInt(start, finish, limit, s));
}

TEST_F(Tests_2999, test_5) {
    long long start = 1114;
    long long finish = 1864854501;
    long long limit = 7;
    string s = "27";
    ASSERT_EQ(4194295, Solution().numberOfPowerfulInt(start, finish, limit, s));
}

TEST_F(Tests_2999, test_6) {
    long long start = 123546;
    long long finish = 32486458654;
    long long limit = 4;
    string s = "1";
    ASSERT_EQ(4194295, Solution().numberOfPowerfulInt(start, finish, limit, s));
}

TEST_F(Tests_2999, test_7) {
    long long start = 1;
    long long finish = 1114;
    long long limit = 9;
    string s = "27";
    ASSERT_EQ(11, Solution().numberOfPowerfulInt(start, finish, limit, s));
}

TEST_F(Tests_2999, test_8) {
    long long start = 1;
    long long finish = 11114;
    long long limit = 9;
    string s = "27";
    ASSERT_EQ(111, Solution().numberOfPowerfulInt(start, finish, limit, s));
}
