#include <gtest/gtest.h>

// Required because Google Test and UnitTest++ interfere.
#define UNITTEST_ENABLE_SHORT_MACROS 0
#define UNITTEST_DISABLE_SHORT_MACROS 1
#include <UnitTest++/UnitTest++.h>

TEST(unittestcpp, basics) {
  UnitTest::TimeHelpers::SleepMs(1000);
  ASSERT_TRUE(true);
}
