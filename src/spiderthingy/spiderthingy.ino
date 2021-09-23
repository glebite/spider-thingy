#include <Arduino.h>

#include <ServoEasing.h>
#include "PinDefinitionsAndMore.h"

#define INFO

// spider-thingy
// 4 legged spider based of of countless other ideas
const int SERVO1_PCA9685_PIN = 9;
cosnt int SERVO1_PIN = 9;

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
  Servo1.setSpeed(10);
  Servo1.easeTo(90);
  Servo1.startEaseTo(180,30);
  delay(1000);
}
