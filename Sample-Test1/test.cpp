#include "pch.h"
#include "../Project8/PrimeFactor.cpp"

TEST(TestCaseName, TestName) {
	PrimeFactor prime_factor;
	vector<int> expected = {};
  EXPECT_EQ(expected, prime_factor.of(1));
}