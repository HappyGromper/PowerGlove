//set up pins for flex sensor and values
#include "Arduino.h"


const int thumbPin = 0;
//const int pointerV = A1;
//const int middleV = A2;
//const int ringV = A3;
//const int littleV = A4;

bool neo = true;
bool tPos1, tPos2, tPos3 = false;
// bool pPos1, pPos2, pPos3 = false;
// bool midlePos1, midlePos2, midlePos3 = false;
// bool rPos1, rPos2, rPos3 = false;
// bool lPos1, lPos2, lPos3 = false;

void setup() {
Serial.begin(9600);

}

void loop() {

  int thumbV = analogRead(thumbPin);
  // Serial.println(thumbV);

  // Serial.println(thumbV);


  // int flex0to100 = map(thumbV, 680, 812 , 0, 100);

  int mapThumbV = map(thumbV, 76, 203, 0, 100);
  // Serial.println(flex0to100);
  // println(thumbV);

  // if(mapThumbV < 33){
  //   Serial.println("Thumb Pos 1");
  //   tPos1 = true;
  // }
  // else if(mapThumbV > 33 && mapThumbV < 66){
  //   Serial.println("Thumb Pos 2");
  //
  //   tPos2 = true;
  // }
  // else if(mapThumbV > 66 ){
  //   Serial.println("Thumb Pos 3");
  //   tPos3 = true;
  // }
  // else{
  //   Serial.println("Null");
  // }


  if(mapThumbV > 75 && mapThumbV < 100){
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
    Serial.println("Null");
  }

  // if (tPos1 = true) {
  //   Serial.println("Thumb Pos 1");
  // }
  // if (tPos2 = true) {
  //   Serial.println("Thumb Pos 2");
  // }
  // if (tPos3 = true) {
  //   Serial.println("Thumb Pos 3");
  // }




 // while(pointerV <= 33){pPos1 = true}
 // while(pointerV > 33 && < 66){pPos2 = true}
 // while(pointerV > 66 && < 100){pPos3 = true}

 // while(middleV <= 33){midlePos1 = true}
 // while(middleV > 33 && < 66){midlePos2 = true}
 // while(middleV > 66 && < 100){midlePos3 = true}

 // while(ringV <= 33){rPos1 = true}
 // while(ringV > 33 && < 66){rPos1 = true}
 // while(ringV > 66 && < 100){rPos1 = true}

 // while(littleV <= 33){lPos1 = true}
 // while(littleV > 33 && < 66){lPos2 = true}
 // while(littleV > 66 && < 100){lPos3 = true}
  delay(50);
}
