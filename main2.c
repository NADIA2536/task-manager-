int led1=4; int trig=12; int echo=11;
int temps ; int distance;
int led2=2; int led3=0;
void setup()
{
  pinMode(led1, OUTPUT);
   pinMode(echo, INPUT);
   pinMode(trig, OUTPUT);
   pinMode(led2, OUTPUT);
   pinMode(led3, OUTPUT);
}

void loop()
{
   digitalWrite(trig , LOW);
  delayMicroseconds(5);
   digitalWrite(trig, HIGH);
    delayMicroseconds(10);
   digitalWrite(trig , LOW);
 temps=pulseIn(echo,HIGH);
  distance=temps/58;
  if ((0<distance)&&(distance < 20))
  {
  digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
  else if ((20<=distance)&&(distance< 40)) 
  {
  digitalWrite(led2, HIGH);
      digitalWrite(led1, LOW);
      digitalWrite(led3, LOW);
    
  }
  else if((40<=distance)&&(distance<60))
  {
     digitalWrite(led3, HIGH);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
  }
  else 
  {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
  }
}
