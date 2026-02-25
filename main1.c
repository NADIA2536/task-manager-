int MAR1=12;  int AV1=10;  int AR1=11;
int MAR2=7;	  int AV2=5;  int AR2=6;
  

void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);


}
void avancer()
{ digitalWrite(MAR1, HIGH);
    digitalWrite(AV1, 100);
    digitalWrite(AR1, 0);
  
    digitalWrite(MAR2, HIGH);
    digitalWrite(AV2, 100);
    digitalWrite(AR2, 0); 
  
} 
  void reculer() 
  { digitalWrite(MAR1, HIGH);
    digitalWrite(AV1, 0);
    digitalWrite(AR1, 100);
  
  int MAR1=12;  int AV1=10;  int AR1=11;
int MAR2=7;	  int AV2=5;  int AR2=6;
  

void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);


}
void avancer()
{ digitalWrite(MAR1, HIGH);
    digitalWrite(AV1, 100);
    digitalWrite(AR1, 0);
  
    digitalWrite(MAR2, HIGH);
    digitalWrite(AV2, 100);
    digitalWrite(AR2, 0); 
  
} 
  void reculer() 
  { digitalWrite(MAR1, HIGH);
    digitalWrite(AV1, 0);
    digitalWrite(AR1, 100);
  
    digitalWrite(MAR2, HIGH);
    digitalWrite(AV2, 0);
    digitalWrite(AR2, 100);
  
  
  } 
  void stop()
  {
  digitalWrite(MAR1, LOW );
    digitalWrite(MAR2, LOW );
  }

  
  
void loop()
{
 avancer();
  delay(5000);
  stop();
  delay(1000);
  reculer();
  delay(3000);
  stop();
  delay(1000);
  
  
}

