#include <Arduino.h>

// Apartado 1
int lastState1 = LOW;
int lastState2 = LOW;
const byte pulsador1 = 3;
const byte pulsador2 = 10;
const byte octocoplado = 11;

void setup() {
  Serial.begin(115200);
  Serial.println("System, online...");
  pinMode(pulsador1, INPUT);
  pinMode(pulsador2, INPUT);
}

void loop() {
  int val1 = digitalRead(pulsador1);
  int val2 = digitalRead(pulsador2);

  if (lastState1 == HIGH && val1 == LOW) {
    Serial.println("Pulsador1 -> OFF");
  } else if (lastState1 == LOW && val1 == HIGH) {
    Serial.println("Pulsador1 -> ON");
  }

  if (lastState2 == HIGH && val2 == LOW) {
    Serial.println("Pulsador2 -> OFF");
  } else if (lastState2 == LOW && val2 == HIGH) {
    Serial.println("Pulsador2 -> ON");
  }

  lastState1 = val1;
  lastState2 = val2;
  delay(100);
}
