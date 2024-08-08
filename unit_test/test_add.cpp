#include "gtest/gtest.h"
#include "add.h"

TEST(AddTest, PositiveNumbers){
    EXPECT_EQ(add(1, 2), 3);
    EXPECT_EQ(add(100, 200), 300);
}

TEST(AddTest, NegativeNumbers){
    EXPECT_EQ(add(-1, -2), -3);
    EXPECT_EQ(add(-100, -200), -300);
}
