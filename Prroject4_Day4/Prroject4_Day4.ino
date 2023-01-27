#include <Servo.h>
#include <Ultrasonic.h>

Servo s=Servo();
Ultrasonic u=Ultrasonic(7,6);//trig,echo


void setup() {
  // put your setup code here, to run once:
  s.attach(8);
  pinMode(11,OUTPUT);//Speed(0-255)
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  analogWrite(11,255);
  

}

void loop() {
  // put your main code here, to run repeatedly:
   int d=u.read();
   if (d>10){
   digitalWrite(12,HIGH);
   digitalWrite(13,LOW);
   s.write(30);
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);
   digitalWrite(5,LOW);
   delay (300);
   digitalWrite(2,HIGH);
   digitalWrite(3,HIGH);
   digitalWrite(4,LOW);
   digitalWrite(5,LOW);
    delay (300);
   
   }
   else {
   digitalWrite(13,HIGH);
   digitalWrite(12,LOW);
   s.write(60);
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);
   digitalWrite(5,LOW);
   delay (300);
   digitalWrite(2,HIGH);
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(5,HIGH);
    delay (300);
   }
   
   
}
