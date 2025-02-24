#include <Arduino.h>

int lastState = HIGH; 

void setup() {
  Serial.begin(115200);
  pinMode(10, INPUT);
  Serial.println("Iniciando programa");
}

void loop() {
  int val = digitalRead(10);

  if (lastState == HIGH && val == LOW) {
    Serial.println("0");
  }else if(lastState == LOW && val == HIGH) {
    Serial.println("1");
  }

  lastState = val;
  delay(100);
}
