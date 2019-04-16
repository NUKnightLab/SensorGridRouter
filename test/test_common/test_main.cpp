#include "SensorGridRouter/test_common/test_router/test_router.h"
#include <unity.h> // This import is needed or the setUp and tearDown will not be called
#include <stdio.h>

/**
 * We can really only have a single setUp and tearDown per testing group. It will not help to
 * push these into the submodules as they can only be defined once (per testing group).
 * 
 * If you really need different setUp or tearDown functions for a specific group of tests,
 * create a separate test group as exemplified by the test_common_thing group here.
 */
void setUp(void) {
    printf("***** SETUP \n");
}

void tearDown(void) {
    printf("TEARDOWN *****\n");
}


void process() {
    Test_SensorGridRouter::test_all();
}

#ifdef ARDUINO

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

#else

int main(int argc, char **argv) {
    process();
    return 0;
}

#endif
