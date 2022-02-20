int value=0;
void setup() 
{
  pinMode(13,OUTPUT);
  pinMode(8,INPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  int i=0;
  value=digitalRead(8);
  if(value==HIGH)
  {digitalWrite(13,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
   
  do{
    i++;
    tone(12,450);
    delay(200);
    noTone(12);
    delay(200);
  }while(i<3);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  
  }
 
  if(value==LOW)
 { noTone(12);
  digitalWrite(13,HIGH);}       
}
