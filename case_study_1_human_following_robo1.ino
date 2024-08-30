// C++ code
//
void setup()
{
  pinMode(11,OUTPUT);
  pinMode(10,INPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop()
{
  digitalWrite(11,LOW);
  delayMicroseconds(2); 
  digitalWrite(11,HIGH);
  delayMicroseconds(10);
  digitalWrite(11,LOW);
  delayMicroseconds(2);
  long time = pulseIn(10,HIGH);
  int distance = 0.034*time/2;
  if(distance<300){
    digitalWrite(8,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
    
}
  else{
    digitalWrite(8,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
  }
 }
    