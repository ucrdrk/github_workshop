#include <gtest/gtest.h>
#include <cmath>
#include "basic_math.h"

// using namespace ucr::bcoe::cs::cs100::sqrt;

TEST(CS100_TEST_SUITE, BASIC_MATH_TESTS_SQRT_POSITIVE) {
    {
        using ucr::bcoe::cs::cs100::sqrt;
        ASSERT_DOUBLE_EQ(3.0, sqrt(9.0));
        EXPECT_DOUBLE_EQ(7.0, sqrt(49.0));
    }
}

TEST(CS100_TEST_SUITE, BASIC_MATH_TESTS_SQRT_NEGATIVE) {
    {
        using ucr::bcoe::cs::cs100::sqrt;
        EXPECT_TRUE(std::isnan(sqrt(-9.0)));
        EXPECT_TRUE(std::isnan(sqrt(-49.0)));
    }
}

TEST(CS100_TEST_SUITE, BASIC_MATH_TESTS_SQRT_FLOAT_RESULT) {
    {
        using ucr::bcoe::cs::cs100::sqrt;
        EXPECT_DOUBLE_EQ(1.2, sqrt(1.44));
        EXPECT_DOUBLE_EQ(0.6, sqrt(.36)); 
    }
}


int main(int argc, char *argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}