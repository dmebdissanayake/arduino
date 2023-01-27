#include <Servo.h>
#include <Ultrasonic.h>

Servo s=Servo();
Ultrasonic u=Ultrasonic(3,2);//trig,echo
void setup() {
  // put your setup code here, to run once:
  s.attach(8);
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int d=u.read();
  Serial.println(d);
  if(d<10){
    s.write(90);
    digitalWrite (9,HIGH); 
    digitalWrite (10,HIGH);
    digitalWrite (11,HIGH);
    digitalWrite (12,HIGH);
    delay(500);
    s.write(120);
    digitalWrite (9,LOW); 
    digitalWrite (10,LOW);
    digitalWrite (11,LOW);
    digitalWrite (12,LOW);
    delay(500);
     
  }
  else{
  s.write(30);
  digitalWrite (9,HIGH); 
    digitalWrite (10,HIGH);
    digitalWrite (11,LOW);
    digitalWrite (12,LOW);
    delay(300);
    s.write(60);
    digitalWrite (9,LOW); 
    digitalWrite (10,LOW);
    digitalWrite (11,LOW);
    digitalWrite (12,LOW);
    delay(300);
  }
  

}
