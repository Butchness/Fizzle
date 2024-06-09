#include <Arduino.h>

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  analogWrite(13, HIGH);
  delay(0.5);
  analogWrite(13, LOW);
  delay(0.5);
}