#include <Servo.h> // motor

Servo S1;



void setup (){
  Serial.begin (9600); // speed
  S1.attach (7); // leg to attach
 
}




void loop (){
  int Value = analogRead (A0); // разъем
  
 // Serial.println (Value);// writeln ord(symbol
  
  for (int i = 0 ; i < 180; i ++){
    S1.write (i); // graduses 0 - 180
    delay (1000);
  }
    for (int i = 180 ; i > 0; i --){
    S1.write (i); // graduses 0 - 180
    delay (1000);
  }
  delay (500); // wait 500 msec
}
