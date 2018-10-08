#pragma once
#include "resh_calc.h"
#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

using namespace testing;
//bool first_check(const int &n, const int &m, const int &k, const int &r, const int &c1, const int &c2)
//create_interval(const int &c1, const int &c2, const int &r, std::set<int> *s, std::map<int, std::pair<int, int>> *map)
//int calculate_result (int n, int m, unsigned int s_size)
TEST(test_of_creation, routes_intersect)
{
    std::map<int, std::pair<int,int>> map;
    std::set<int> set;
    //map.emplace(3, std::pair<int, int> (4))
    EXPECT_EQ(create_interval(4, 4, 3, &set, &map), 1);
    EXPECT_EQ(create_interval(2, 2, 3, &set, &map), 1);
    EXPECT_EQ(create_interval(3, 1, 4, &set, &map), 1);
    EXPECT_EQ(create_interval(3, 1, 4, &set, &map), 0);
    map.erase (map.begin(), map.end());
    set.clear();
    EXPECT_EQ(create_interval(4, 4, 3, &set, &map), 1);
    EXPECT_EQ(create_interval(4, 4, 3, &set, &map), 0);
    EXPECT_EQ(create_interval(4, 4, 3, &set, &map), 0);
    ASSERT_THAT(0, Eq(0));
}
TEST(test_of_verification, out_of_range)
{
    EXPECT_EQ(first_check(4, 4, 3, 1, 1, 1), 1);
    EXPECT_EQ(first_check(0, 4, 3, 1, 1, 1), 0);
    EXPECT_EQ(first_check(4, 2000000000, 3, 1, 1, 1), 0);
    EXPECT_EQ(first_check(4, 4, 10000, 1, 1, 1), 0);
    EXPECT_EQ(first_check(4, 4, 3, 0, 1, 1), 0);
    EXPECT_EQ(first_check(4, 4, 3, 1, 0, 1), 0);
    EXPECT_EQ(first_check(4, 4, 3, 1, 0, 0), 0);
}
TEST(test_of_result_func, bad_arithmetic)
{
    EXPECT_EQ(calculate_result(4, 4, 6), 38);
    EXPECT_EQ(calculate_result(0, 4, 3), -3);
    EXPECT_EQ(calculate_result(1, 4, 4), 0);
}
