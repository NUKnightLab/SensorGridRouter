#include <unity.h>
#include <SensorGridRouter.h>
#include <stdio.h>

namespace Test_SensorGridThing {

    void test_test(void) {
        TEST_ASSERT_TRUE(true);
    }

    void test_all() {
        UNITY_BEGIN();
        RUN_TEST(test_test);
        RUN_TEST(test_test);
        UNITY_END();
    }
}