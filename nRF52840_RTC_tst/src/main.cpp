#include <Arduino.h>

#include "RTC.h"

void setup() {
  // Serial.begin(115200);
  // while(!Serial) delay(10);

  pinMode(PIN_LED1, OUTPUT);
  digitalWrite(PIN_LED1, LOW);

  rtc_init();
}

void loop() {
  if (RTC_COMPARE_triggered()) {
    digitalToggle(PIN_LED1);
    RTC_Clear();
  }
}



