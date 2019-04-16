#include "SensorGridRouter/test_desktop/test_router.h"
#include <unity.h>

// void setUp(void) {
// // set stuff up here
// }

// void tearDown(void) {
// // clean stuff up here
// }


void process() {
    UNITY_BEGIN();
    Test_SensorGridRouter::test_all();
    UNITY_END();
}

int main(int argc, char **argv) {
    process();
    return 0;
}