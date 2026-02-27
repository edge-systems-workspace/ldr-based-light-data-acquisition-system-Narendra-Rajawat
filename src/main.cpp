#include <Arduino.h>

/**
 * @file main.ino
 * @brief Embedded Light Intensity Monitoring using LDR
 */

// TODO 1:
// Define LDR analog pin (Use A0)
#define LDR_PIN A0

// TODO 2:
// Create variable to store sensor reading
int ldrValue = 0;

void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // TODO 4:
    // Print system initialization message
    Serial.println("LDR Light Intensity Monitoring Initialized");
}

void loop() {

    // TODO 5:
    // Read analog value from LDR
    ldrValue = analogRead(LDR_PIN);

    // TODO 6:
    // Print raw ADC value
    Serial.print("LDR Raw Value: ");
    Serial.println(ldrValue);

    // TODO 7:
    // Apply threshold logic (Bright / Dark detection)
    if (ldrValue < 500) {

        // TODO 8:
        // Print brightness status
        Serial.println("Environment: DARK");
    } else {
        Serial.println("Environment: BRIGHT");
    }

    // TODO 9:
    // Add delay (1 second)
    // delay(1000);
}