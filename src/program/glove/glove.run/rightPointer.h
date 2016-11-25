#include "Arduino.h"

const int pointerPin = 1;
bool pPos1, pPos2, pPos3 = false;

void pointerReading(){
  int pointerV = analogRead(pointerPin);

  // int mapPointerV = map(pointerV, 76, 203, 0, 100);
  // if(mapPointerV > 75 /*&& mapThumbV < 100*/){
  //   Serial.println("Pointer Pos 1");
  //   tPos1 = true;
  // }
  // else if(mapPointerV > 50 && mapPointerV < 75){
  //   Serial.println("Pointer Pos 2");
  //   tPos2 = true;
  // }
  // else if(mapPointerV > 25 && mapPointerV < 50){
  //   Serial.println("Pointer Pos 3");
  //   tPos3 = true;
  // }
  // else if(mapPointerV < 25){
  //   Serial.println("Pointer Pos 4");
  // }
  // else{
  //   Serial.println(" Null");
  // }

}
