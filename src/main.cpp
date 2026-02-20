#include <Arduino.h>

/**
 * @file main.ino
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author Piyush Choudhary
 * @date 2026-02-20
 */

#define LDR_PIN A0

int ldrValue = 0;

void setup() {

    Serial.begin(9600);

    // STEP 3: Print initialization message
    Serial.println("=== LDR Light Intensity Monitoring System Initialized ===");
}

void loop() {
}