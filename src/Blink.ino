#include "Arduino.h"
/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
  This example code is in the public domain.
 */
#ifndef LED_ON
#define LED_ON (HIGH)
#endif

#ifndef LED_BUILTIN
#define LED_BUILTIN (13)
#endif

#ifndef LED
#define LED (LED_BUILTIN)
#endif

void setup() {
  // initialize the digital pin as an output.
  pinMode(LED, OUTPUT);
  Serial.begin(115200);
  Serial.println("hello world!");
}

void loop() {
  Serial.println("blink on");
  digitalWrite(LED, LED_ON);   // set the LED on
  delay(1000);                  // wait for a second

  Serial.println("blink off");
  digitalWrite(LED, !LED_ON);  // set the LED off
  delay(1000);                 // wait for a second
}
