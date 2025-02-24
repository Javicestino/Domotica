#include <Arduino.h>

// Apartado 1
int lastState1 = LOW;
int lastState2 = LOW;
bool state1 = LOW;
bool state2 = LOW;
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

  if (lastState1 == LOW && val1 == HIGH) {
    state1 = !state1;
    Serial.print("Pulsador1 -> ");
    Serial.println(state1 ? "ON" : "OFF");
  }

  if (lastState2 == LOW && val2 == HIGH) {
    state2 = !state2;
    Serial.print("Pulsador2 -> ");
    Serial.println(state2 ? "ON" : "OFF");
  }

  lastState1 = val1;
  lastState2 = val2;
  delay(100);
}
