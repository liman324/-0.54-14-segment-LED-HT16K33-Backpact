#include <Wire.h>
#include <4x14LED.h>
  HT4x14LED led;
 

void setup() {
   Wire.begin();
   Serial.begin(9600);
   led.init(1);
   led.brig(10);
   led.blink(1);
   led.clear();
}

void loop() {
 led.print(1234, 0,   -1, -1,-1,-1);
 delay(1000);
}
