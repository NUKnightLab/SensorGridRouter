#include <unity.h>
#include <SensorGridRouter.h>

namespace Test_SensorGridRouter {

    void test_test(void) {
        TEST_ASSERT_TRUE(true);
    }

    void test_all() {
        RUN_TEST(test_test);
    }
}