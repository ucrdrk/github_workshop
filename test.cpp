#include <gtest/gtest.h>
#include <cmath>
#include "basic_math.h"

TEST(CS100_TEST_SUITE_BASIC_MATH_TESTS, SQRT_POSITIVE) {
    {
        using ucr::bcoe::cs::cs100::sqrt;
        ASSERT_DOUBLE_EQ(3.0, sqrt(9.0));
        EXPECT_DOUBLE_EQ(7.0, sqrt(49.0));
    }
}

TEST(CS100_TEST_SUITE_BASIC_MATH_TESTS, SQRT_NEGATIVE) {
    {
        using ucr::bcoe::cs::cs100::sqrt;
        EXPECT_TRUE(std::isnan(sqrt(-9.0)));
        EXPECT_TRUE(std::isnan(sqrt(-49.0)));
    }
}

TEST(CS100_TEST_SUITE_BASIC_MATH_TESTS, SQRT_FLOAT_RESULT) {
    {
        using ucr::bcoe::cs::cs100::sqrt;
        EXPECT_DOUBLE_EQ(1.2, sqrt(1.44));
        EXPECT_DOUBLE_EQ(0.6, sqrt(.36)); 
    }
}

TEST(CS100_TEST_SUITE_BASIC_MATH_TESTS, SIN) {
    {
        using ucr::bcoe::cs::cs100::sin;
        ASSERT_DOUBLE_EQ(::sin(M_PI), sin(M_PI));
        EXPECT_DOUBLE_EQ(::sin(0), sin(0));
    }
}

TEST(CS100_TEST_SUITE_BASIC_MATH_TESTS, SIN_NAN) {
    {
        using ucr::bcoe::cs::cs100::sin;
        EXPECT_TRUE(std::isnan(sin(NAN)));
        EXPECT_TRUE(std::isnan(sin(INFINITY)));
    }
}

TEST(CS100_TEST_SUITE_BASIC_MATH_TESTS, COS) {
    {
        using ucr::bcoe::cs::cs100::cos;
        ASSERT_DOUBLE_EQ(::cos(M_PI), cos(M_PI));
        EXPECT_DOUBLE_EQ(::cos(0), cos(0));
    }
}

TEST(CS100_TEST_SUITE_BASIC_MATH_TESTS, COS_NAN) {
    {
        using ucr::bcoe::cs::cs100::cos;
        EXPECT_TRUE(std::isnan(cos(NAN)));
        EXPECT_TRUE(std::isnan(cos(INFINITY)));
    }
}

TEST(CS100_TEST_SUITE_BASIC_MATH_TESTS, ABS) {
    {
        using ucr::bcoe::cs::cs100::abs;
        ASSERT_DOUBLE_EQ(3.0, abs(3.0));
        EXPECT_DOUBLE_EQ(3.0, cos(-3.0));
    }
}

TEST(CS100_TEST_SUITE_BASIC_MATH_TESTS, ABS_NAN) {
    {
        using ucr::bcoe::cs::cs100::abs;
        EXPECT_TRUE(std::isnan(abs(NAN)));
        EXPECT_EQ(INFINITY, abs(INFINITY));
    }
}
int main(int argc, char *argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}