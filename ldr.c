/*
    Project name : LDR photo resistor module
    Modified Date: 11-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-ldr-photo-resistor-module
*/

const int ldrPin = A0; // Analog pin connected to the LDR module
int ldrValue = 0;      // Variable to store the LDR value

void setup() {
  Serial.begin(9600);  // Initialize serial communication
}

void loop() {
  // Read the value from the LDR module
  ldrValue = analogRead(ldrPin);

  // Print the LDR value to the Serial Monitor
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  // Add a short delay before the next reading
  delay(500);
}
