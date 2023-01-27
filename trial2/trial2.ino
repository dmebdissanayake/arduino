
#include <Servo.h>

Servo s=Servo();

void setup() {
  // put your setup code here, to run once:
s.attach(8);
pinMode(9,OUTPUT);//IN1
pinMode(8,OUTPUT);//IN2
pinMode(10,OUTPUT);//ENA
analogWrite(10,200);//Speed(0-255)

pinMode(7,OUTPUT);//IN3
pinMode(6,OUTPUT);//IN4
pinMode(5,OUTPUT);//ENB
analogWrite(5,200);//Speed(0-255)

Serial.begin(9600);   
    
}

void loop() {
  // put your main code here, to run repeatedly:
  int x=Serial.read();
  if(x=='1'){
    digitalWrite(9,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(6,LOW);
    }
  if(x=='2'){
    digitalWrite(9,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(6,HIGH);
    }
  if(x=='0'){
    digitalWrite(9,LOW);
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
    }
  if(x=='3'){
    digitalWrite(9,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
    }
  if(x=='4'){
    digitalWrite(9,LOW);
    digitalWrite(8,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(6,LOW);
  }
  
}
