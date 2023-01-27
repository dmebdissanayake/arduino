#include <Servo.h>
Servo s=Servo();

void setup() {
  // put your setup code here, to run once:
s.attach(4);
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
analogWrite(11,200);

pinMode(7,OUTPUT);
pinMode(6,OUTPUT);
pinMode(5,OUTPUT);
analogWrite(5,200);

pinMode (8,OUTPUT);
pinMode (9,OUTPUT);
pinMode (10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
delay(8000);

//forward
      digitalWrite(13,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      delay(500);
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
      delay(1000);
//reverse
    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(6,HIGH);
    delay(500);
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
    delay(750);
    
//TURN RIGHT
s.write(45);
delay(300);
    digitalWrite(13,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
      delay(500);
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
      s.write(90);
      delay(2000);

//TURN LEFT
s.write(135);
delay(300);
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      delay(500);
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
      s.write(90);
      delay(1500);
      
//forward x2
      digitalWrite(13,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      delay(500);
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
      delay(500);
      digitalWrite(13,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      delay(500);
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
      delay(1500);

 //look left
 s.write(135);
 delay(300);
 digitalWrite(8,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(10,HIGH);
 delay(100);
 digitalWrite(8,LOW);
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);
 delay(100);
 digitalWrite(8,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(10,HIGH);
 
 s.write(90);
 delay(300);
 digitalWrite(8,LOW);
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);

 //LOOK Right
 s.write(45);
 delay(300);
 digitalWrite(8,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(10,HIGH);
 delay(100);
 digitalWrite(8,LOW);
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);
 delay(100);
 digitalWrite(8,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(10,HIGH);
 
 s.write(90);
 delay(300);
 digitalWrite(8,LOW);
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);

 //reverse
    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(6,HIGH);
    delay(500);
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
    delay(750);

//TURN LEFT
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      delay(500);
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
      delay(1500); 

 
 
 
 
 

}
