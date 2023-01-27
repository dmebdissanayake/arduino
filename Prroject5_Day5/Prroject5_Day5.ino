#include <Ultrasonic.h>
#include <Servo.h>

Ultrasonic u=Ultrasonic (2,3);//trig,echo

void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);//IN1
pinMode(12,OUTPUT);//IN2
pinMode(11,OUTPUT);//ENA
analogWrite(11,200);//Speed(0-255)

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
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(6,LOW);
    }
  if(x=='2'){
    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(6,HIGH);
    }
  if(x=='0'){
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
    }
  if(x=='3'){
    digitalWrite(13,HIGH);//TURN RIGHT
    digitalWrite(12,LOW);
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
    }
  if(x=='4'){
    digitalWrite(13,LOW);//TURN LEFT
    digitalWrite(12,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(6,LOW);
  }
  
}
