// fake_class_tests.cpp
#include <gtest/gtest.h>
#include "fake_class.hpp"

TEST(FakeClassTest, AddNumbers)
{
    fake_class fc;
    ASSERT_EQ(3, fc.add_numbers(1,2));

}

TEST(FakeClassTest,SubtractNumbers)
{
    fake_class fc;
    ASSERT_EQ(7, fc.subtract_numbers(10, 3));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}