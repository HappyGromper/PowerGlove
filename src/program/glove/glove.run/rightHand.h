#include "Arduino.h"
#include "rightThumb.h"
// #include "rightPointer.h"
// #include "rightMiddle.h"

void setup(){
  Serial.begin(9600);
}
void loop(){
  rightThumb();

  delay(50);
}
