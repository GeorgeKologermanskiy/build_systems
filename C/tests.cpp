#include "A/index.h"
#include "B/lib.h"
#include "gtest/gtest.h"

TEST(TestA, SimpleTest) {
    ASSERT_EQ(1, NA::gcd(4, 5));
    ASSERT_EQ(4, NA::gcd(8, 12));
}

TEST(TestB, SimpleTest) {
    ASSERT_EQ(NB::sum(1, 2), 3);
    ASSERT_EQ(NB::mul(3, 4), 12);
}
