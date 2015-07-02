#include <Servo.h> // motor

Servo S1;

int angle = 90;

void setup (){
  Serial.begin (9600); // speed
  S1.attach (7); // leg to attach
  
  S1.write (angle);
 
}



void loop (){
  
  int Value1 = analogRead (A0); // разъем
  int Value2 = analogRead (A1); 
  
 // Serial.println (Value);// writeln ord(symbol
   float Reg = (Value1 - Value2) * 0.003;
   angle = angle - Reg;
   if (angle < 0)
    angle = 0;
   if (angle > 180)
   angle = 180;
   
   S1.write (angle);
 
    ///S1.write (angle); // graduses 0 - 180
    delay (10);
    
}
