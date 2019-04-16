#include <unity.h>
#include <SensorGridRouter.h>
#include <stdio.h>

SensorGridRouter router;

namespace Test_SensorGridRouter {

    void test_function_add(void) {
        TEST_ASSERT_EQUAL(32, router.add(25, 7));
    }

    /**
     * We put the UNITY_BEGIN and UNITY_END guards here in the submodule, rather than a single set
     * of guards in the main runner, because the location of these determines the filename that
     * is output during testing. Doing this here gives us the more specific filename where the
     * tests actually reside.
     */
    void test_all() {
        UNITY_BEGIN();
        RUN_TEST(test_function_add);
        RUN_TEST(test_function_add);
        UNITY_END();
    }
}