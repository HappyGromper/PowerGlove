#include "Arduino.h"

const int middlePin = 2;
// bool midlePos1, midlePos2, midlePos3 = false;
void middleReading(){
  int middleV = analogRead(middlePin);

  // int mapMiddleV = map(middleV, 76, 203, 0, 100);
  // if(mapMiddleV > 75 /*&& mapMiddleV < 100*/){
  //   Serial.println("Pointer Pos 1");
  //   tPos1 = true;
  // }
  // else if(mapMiddleV > 50 && mapMiddleV < 75){
  //   Serial.println("Pointer Pos 2");
  //   tPos2 = true;
  // }
  // else if(mapMiddleV > 25 && mapMiddleV < 50){
  //   Serial.println("Pointer Pos 3");
  //   tPos3 = true;
  // }
  // else if(mapMiddleV < 25){
  //   Serial.println("Pointer Pos 4");
  // }
  // else{
  //   Serial.println(" Null");
  // }

}
