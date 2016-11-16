#include "gtest/gtest.h"
#include "Line.hpp"

TEST(basic_check, test_eq) {
    EXPECT_DOUBLE_EQ(1.0,1.0);
}

TEST(basic_check, test_neq) {
    EXPECT_NE(1.0,0.0);
}

TEST(basic_check, test_y) {
    Line l0 = Line(1.0,0.0);

    EXPECT_DOUBLE_EQ(0.0,l0.y(0.0));
    EXPECT_DOUBLE_EQ(1.0,l0.y(1.0));
    EXPECT_DOUBLE_EQ(2.0,l0.y(2.0));

    Line l1 = Line(M_PI,M_E);

    EXPECT_NEAR(3.14159+2.71828,l1.y(1.0),1e-5);
}
