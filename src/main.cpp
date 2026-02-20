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
    Serial.println("=== LDR Light Intensity Monitoring System Initialized ===");
}

void loop() {

    // STEP 4: Read analog value from LDR
    ldrValue = analogRead(LDR_PIN);

    // STEP 4: Print raw ADC value
    Serial.print("Raw ADC Value: ");
    Serial.println(ldrValue);

    delay(500);
}