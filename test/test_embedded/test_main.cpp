#include "SensorGridRouter/test_embedded/test_router.h"
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

#include <Arduino.h>
void setup() {
    process();
}

void loop() {
    digitalWrite(13, HIGH);
    delay(100);
    digitalWrite(13, LOW);
    delay(500);
}