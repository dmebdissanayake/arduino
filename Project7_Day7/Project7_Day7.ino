#include <Ultrasonic.h>
Ultrasonic u=Ultrasonic(2,3);

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

Serial.begin(9600);

pinMode (8,OUTPUT);
pinMode (9,OUTPUT);
pinMode (10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x=Serial.read();
  

  if(x=='1'){
    s.write(90);
    delay(300);
    int d=u.read();
    if(d>20){
      digitalWrite(8,HIGH);//BLED
      digitalWrite(9,LOW);//RLED
      digitalWrite(10,LOW);//GLED    
      digitalWrite(13,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      delay(500);
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
      digitalWrite(8,LOW);//BLED
      digitalWrite(9,LOW);//RLED
      digitalWrite(10,LOW);//GLED
    }
    
    
  }
  
  if(x=='2'){

    digitalWrite(8,LOW);//BLED
    digitalWrite(9,HIGH);//RLED
    digitalWrite(10,LOW);//GLED
    delay(500);
    digitalWrite(8,LOW);//BLED
    digitalWrite(9,LOW);//RLED
    digitalWrite(10,LOW);//GLED
    delay(500);
    digitalWrite(8,LOW);//BLED
    digitalWrite(9,HIGH);//RLED
    digitalWrite(10,LOW);//GLED          
    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(6,HIGH);
    delay(500);
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
    digitalWrite(8,LOW);//BLED
    digitalWrite(9,LOW);//RLED
    digitalWrite(10,LOW);//GLED  
    }
  
  if(x=='3'){
    s.write(45);
    delay(300);
    int d=u.read();
    if(d>15){//TURN RIGHT
      digitalWrite(8,LOW);//BLED
      digitalWrite(9,LOW);//RLED
      digitalWrite(10,HIGH);//GLED 
      digitalWrite(13,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
      delay(500);
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
      digitalWrite(8,LOW);//BLED
      digitalWrite(9,LOW);//RLED
      digitalWrite(10,LOW);//GLED
    }
    s.write(90);    
  }
  
  if(x=='4'){
    s.write(135);
    delay(300);
    int d=u.read();
    if(d>15){//TURN LEFT
      digitalWrite(8,LOW);//BLED
      digitalWrite(9,LOW);//RLED
      digitalWrite(10,HIGH);//GLED
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      delay(500);
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
      digitalWrite(8,LOW);//BLED
      digitalWrite(9,LOW);//RLED
      digitalWrite(10,LOW);//GLED
    }
    s.write(90);
  }  
 
}
