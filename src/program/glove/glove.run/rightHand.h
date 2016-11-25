#include "Arduino.h"
#include "rightThumb.h"


void setup(){
  Serial.begin(9600);
}
void loop(){
  rightThumb();

  delay(50);
}
