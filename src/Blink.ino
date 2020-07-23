/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
  This example code is in the public domain.
 */

#if defined(ARDUINO_AVR_LEONARDO)
  // leonardo pro micro has Rx LED on pin 17
  #define LED (17)
  #define LEDON (LOW)
  #define LEDOFF (HIGH)
#elif defined(ARDUINO_ESP32_DEV) || defined(ARDUINO_ESP32_THING)
  #define LED (5)
  #define LEDON (HIGH)
  #define LEDOFF (LOW)
#elif defined(ARDUINO_LOLIN32)
  #define LED (22)
  #define LEDON (HIGH)
  #define LEDOFF (LOW)
#elif defined(ESP8266_WEMOS_D1MINI)
  #define LED (2)
  #define LEDON (LOW)
  #define LEDOFF (HIGH)
#else
  #if defined(LED_BUILTIN)
    #define LED (LED_BUILTIN)
  #else
    // Pin 13 has an LED connected on most Arduino boards:
    #define LED (13)
  #endif
  #define LEDON (LOW)
  #define LEDOFF (HIGH)
#endif

void setup() {
  // initialize the digital pin as an output.
  pinMode(LED, OUTPUT);
  Serial.begin(115200);
  Serial.println("hello world!");
}

void loop() {
  Serial.println("blink on");
  digitalWrite(LED, LEDON);   // set the LED on
  delay(1000);                  // wait for a second

  Serial.println("blink off");
  digitalWrite(LED, LEDOFF);  // set the LED off
  delay(1000);                 // wait for a second
}
