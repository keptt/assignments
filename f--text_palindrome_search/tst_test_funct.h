#pragma once
#include "is_palindrome.h"
#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

using namespace testing;


TEST(Test_funct, Testspalindrome)
{
    Is_Palindrome obj;
    EXPECT_EQ(obj("ssdss"), 1);
    EXPECT_EQ(1, obj("s///sdss"));
    EXPECT_EQ(1, obj("ssd.,ss"));
    EXPECT_EQ(0, obj("sdss"));
    EXPECT_EQ(1, obj("ssss"));
    EXPECT_EQ(0, obj("s"));
    EXPECT_EQ(1, obj("9ssdss"));
    EXPECT_EQ(1, obj("googleelgoog"));
    EXPECT_EQ(1, obj("google,elgoog"));
    EXPECT_EQ(0, obj("ooogleelgoog"));
    EXPECT_EQ(1, obj("fattaf"));
    EXPECT_EQ(0, obj("0-0-0"));
    EXPECT_EQ(1, obj("1234554321"));
    EXPECT_EQ(0, obj("123454321"));
    EXPECT_EQ(0, obj("sdf/ds9/"));
    EXPECT_EQ(0, obj("as8as"));
    EXPECT_EQ(1, obj("as8sa"));
    //ASSERT_THAT(0, Eq(0));
}
