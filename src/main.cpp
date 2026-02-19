#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Touch Detection System using TTP223
 * @author Mayank
 * @date 2026-02-19
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */

const int touchPin = 2;
int touchState = 0;


void setup() {

    Serial.begin(9600);
    pinMode(touchPin, INPUT);
    Serial.println("Touch Sensor System Initialized");

}

void loop() {

    touchState = digitalRead(touchPin);
    if (touchState == HIGH) {
        Serial.println("Touch Detected");
    } else {
        Serial.println("No Touch");
    }

    delay(300);

}
