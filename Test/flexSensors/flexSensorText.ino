//set up pins for flex sensor and values
// #include "Arduino.h"
// const int thumbPin = 0;
// //int pointerV = A1;
// //int middleV = A2;
// //int ringV = A3;
// //int littleV = A4;
//
//
// bool tPos1, tPos2, tPos3 = false;
// bool pPos1, pPos2, pPos3 = false;
// bool midlePos1, midlePos2, midlePos3 = false;
// bool rPos1, rPos2, rPos3 = false;
// bool lPos1, lPos2, lPos3 = false;
//
// setup() {
// begin(9600);
// }
//
// loop(){
//
//   int thumbV = analogRead(thumbPin);
//   Serial.println("Thumb Position");
//   Serial.println(thumbV);

  // put your main code here, to run repeatedly:
 // while(thumbV <= 33){tPos1 = true}
 // while(thumbV > 33 && < 66){tPos2 = true}
 // while(thumbV > 66 && < 100){tPos3 = true}

 // while(pointerV <= 33){pPos1 = true}
 // while(pointerV > 33 && < 66){pPos2 = true}
 // while(pointerV > 66 && < 100){pPos3 = true}
 //
 // while(middleV <= 33){midlePos1 = true}
 // while(middleV > 33 && < 66){midlePos2 = true}
 // while(middleV > 66 && < 100){midlePos3 = true}
 //
 // while(ringV <= 33){rPos1 = true}
 // while(ringV > 33 && < 66){rPos1 = true}
 // while(ringV > 66 && < 100){rPos1 = true}
 //
 // while(littleV <= 33){lPos1 = true}
 // while(littleV > 33 && < 66){lPos2 = true}
 // while(littleV > 66 && < 100){lPos3 = true}


// int flexSensorReading = analogRead(thumbV);



  //In my tests I was getting a reading on the arduino between 512, and 614.
  //Using map(), you can convert that to a larger range like 0-100.
  //int flex0to100 = map(thumbV, 700, 813 , 0, 100);

  // int flex0to100 = map(thumbV, -488, 1023, 0, 100);
  // println(flex0to100);
  // println(thumbV);
  // while (tPos1 = true) {println("Thumb Pos 1")}
  // while (tPos2 = true) {println("Thumb Pos 2")}
  // while (tPos3 = true) {println("Thumb Pos 3")}
  // println("Hi");



  // delay(250); //just here to slow down the output for easier reading

}
