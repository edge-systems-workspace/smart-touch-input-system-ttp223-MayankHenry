#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Touch Detection System using TTP223
 * @author YOUR_NAME
 * @date YYYY-MM-DD
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */

 // TODO 1:
const int touchPin = 2;


 // TODO 2:
int touchState = 0;


void setup() {

    // TODO 3:
    Serial.begin(9600);


    // TODO 4:
    pinMode(touchPin, INPUT);


    // TODO 5:
    Serial.println("Touch Sensor System Initialized");

}

void loop() {

    // TODO 6:
    // Read digital value from touch sensor

    // TODO 7:
    // If touch detected (HIGH)
    //     Print "Touch Detected"
    // Else
    //     Print "No Touch"

    // TODO 8:
    // Add small delay (200–500ms)
}
