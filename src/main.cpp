#include <Arduino.h>

/**
 * @file main.ino
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author Piyush Choudhary
 * @date 2026-02-20
 *
 * @details
 * Reads analog brightness data from an LDR sensor,
 * prints raw ADC values, and performs threshold-based
 * brightness classification (Bright / Dark).
 */

#define LDR_PIN A0

int ldrValue = 0;
const int LIGHT_THRESHOLD = 500;  // Adjust based on calibration

void setup() {

    Serial.begin(9600);
    Serial.println("=== LDR Light Intensity Monitoring System Initialized ===");
}

void loop() {

    // Read analog value
    ldrValue = analogRead(LDR_PIN);

    // Print raw ADC value
    Serial.print("Raw ADC Value: ");
    Serial.println(ldrValue);

    // Apply threshold logic
    if (ldrValue > LIGHT_THRESHOLD) {
        Serial.println("Status: Bright Environment");
    } 
    else {
        Serial.println("Status: Dark Environment");
    }

    delay(1000);  // 1-second delay
}