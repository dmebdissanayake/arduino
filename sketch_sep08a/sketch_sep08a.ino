#include <Ultrasonic.h>
Ultrasonic u=Ultrasonic(2,3);

#include <Servo.h>
Servo s=Servo();




void setup() {
  // put your setup code here, to run once:
  

  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  
s.attach(4);

pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
analogWrite(11,200);

pinMode(7,OUTPUT);
pinMode(6,OUTPUT);
pinMode(5,OUTPUT);
analogWrite(5,200);


s.write(90);
      digitalWrite(13,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      delay(500);
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
      delay(700);
      digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(6,HIGH);
    delay(500);
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);  
    delay(1200);
    s.write(45);
    delay(300);
    digitalWrite(13,HIGH);//TURN RIGHT
      digitalWrite(12,LOW);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
      delay(500);
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
      delay(700);
      s.write(135);
    delay(300);
      digitalWrite(13,LOW);//TURN LEFT
      digitalWrite(12,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      delay(500);
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
      delay(2000);
      digitalWrite(13,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      delay(500);
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
      delay(4000);
      s.write(135);
      delay(300);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      delay(200);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      s.write(90);
      delay(2000);
      s.write(45);
      delay(300);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      delay(200);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      s.write(90);
      delay(2300);
      digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(6,HIGH);
    delay(500);
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(7,LOW);
    digitalWrite(6,LOW); 
    
      
      
      
      
    
      

}
void loop() {
  // put your main code here, to run repeatedly:
int x=Serial.read();
}
