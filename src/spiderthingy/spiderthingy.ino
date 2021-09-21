#include <ServoEasing.h>
#include <Arduino.h>
#include "PinDefinitionsAndMore.h"


// spider-thingy
// 4 legged spider based of of countless other ideas
ServoEasing Servo1;

uint16_t sServoSpeed = 90;

#define START_DEGREE_VALUE 0

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print(F("Attach servo on pin "));
  Serial.println(SERVO1_PIN);
  if (Servo1.attach(SERVO1_PIN) == INVALID_SERVO) {
    Serial.println(F("Error connecting to the servo"));
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}
