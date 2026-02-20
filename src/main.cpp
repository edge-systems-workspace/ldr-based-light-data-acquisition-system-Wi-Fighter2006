#include <Arduino.h>

/**
 * @file main.ino
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author Piyush Choudhary
 * @date 2026-02-20
 *
 * @details
 * Reads analog brightness data from an LDR sensor
 * connected to LDR_PIN and prints light intensity values
 * to the Serial Monitor.
 */

// STEP 1: Define LDR analog pin
#define LDR_PIN A0

// Variable to store LDR reading
int ldrValue = 0;

void setup() {
}

void loop() {
}