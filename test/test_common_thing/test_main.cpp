#include "SensorGridRouter/test_common/test_thing/test_thing.h"
#include <unity.h>
#include <stdio.h>

/**
 * We can really only have a single setUp and tearDown per testing group. It will not help to
 * push these into the submodules as they can only be defined once (per testing group).
 * 
 * If you really need different setUp or tearDown functions for a specific group of tests,
 * create a separate test group as exemplified by the test_common_thing group here. Note that it
 * may be necessary to ignore this distinct testing group in certain envs in the platform.ini.
 */
void setUp(void) {
    printf("***** DIFFERENT THING SETUP \n");
}

void tearDown(void) {
    // This will actually print before the test status does
    printf("DIFFERENT THING TEARDOWN *****\n");
}


void process() {
    Test_SensorGridThing::test_all();
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
