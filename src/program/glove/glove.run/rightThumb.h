#include "Arduino.h"

const int thumbPin = 0;
bool tPos1, tPos2, tPos3 = false;

void thumbReading() {
  int thumbV = analogRead(thumbPin);
  int mapThumbV = map(thumbV, 76, 203, 0, 100);


  if(mapThumbV > 75 /*&& mapThumbV < 100*/){
    Serial.println("Thumb Pos 1");
    tPos1 = true;
 }
 else if(mapThumbV > 50 && mapThumbV < 75){
    Serial.println("Thumb Pos 2");
    tPos2 = true;
  }
  else if(mapThumbV > 25 && mapThumbV < 50){
    Serial.println("Thumb Pos 3");
    tPos3 = true;
  }
  else if(mapThumbV < 25){
    Serial.println("Thumb Pos 4");
  }
  else{
    Serial.println(" Thumb Null");
  }
}
