
//My name  is inderjeet singh, 000745250, i certify that this is my work and have not shared with anyone.

//
#include <Arduino.h>
void setup() {
 // configure the USB serial monitor
 Serial.begin(115200);
 // configure pin D4 as a digital output - this is the LED
 pinMode(D5,INPUT_PULLUP);

 pinMode(D4, OUTPUT);
 // set default PWM range
 analogWriteRange(1023);
}
void loop() {

  int iVal;
  double val;
  int iButton;
 // read the push button input...
 iButton = digitalRead(D5);
 // ... and write it to the LED output

if(iButton == 1){
  digitalWrite(D4, iButton);
}
if(iButton == 0){
  iVal  =analogRead(A0);

  val = map(iVal, 0 , 1023 , 0, 5000);
  analogWrite(D4,val);
}
delay(1);
}

