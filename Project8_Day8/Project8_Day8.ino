
void setup() {
  // put your setup code here, to run once:

pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
analogWrite(11,200);

pinMode(7,OUTPUT);
pinMode(6,OUTPUT);
pinMode(5,OUTPUT);
analogWrite(5,200);

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
      delay(500);
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
      
    }
    
    
  
  
  if(x=='2'){

  
    
              
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
  
  if(x=='3')
   
    {//TURN RIGHT
    
      digitalWrite(13,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
      delay(500);
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
      
    }
       
 
  
  if(x=='4'){
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
      }
}
   
 
