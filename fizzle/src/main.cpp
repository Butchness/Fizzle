#include <Arduino.h>

void setup() {
  pinMode(13, OUTPUT); // Use pin number 13 directly
  Serial.begin(9600);
}

void loop() {
  digitalWrite(13, HIGH); // Turn the LED on
  delay(500);             // Wait for 500 milliseconds
  digitalWrite(13, LOW);  // Turn the LED off
  delay(500);             // Wait for 500 milliseconds
}
