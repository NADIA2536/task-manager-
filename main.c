
int r1=13;
int r2=7;
  int j1=12;
  int j2=5;
  int v1=11;
  int v2=2;
void setup()
{
  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(j1, OUTPUT);
  pinMode(j2, OUTPUT);
  pinMode(v1, OUTPUT);
  pinMode(v2, OUTPUT);

  
}

void loop()
{
  digitalWrite(r1, HIGH);

  
  digitalWrite(v2, HIGH);
 delay(2000);
  digitalWrite(v2, LOW);
  
  
  digitalWrite(j2,HIGH );
  delay(1000);
    digitalWrite(j2,LOW );
 
    digitalWrite(r1,LOW );

    digitalWrite(r2,HIGH );

  digitalWrite(v1, HIGH);
  delay (2000);
    digitalWrite(v1,LOW );
  
  digitalWrite(j1,HIGH );
  delay(1000);
  
    digitalWrite(j1,LOW );
 
   digitalWrite(r2,LOW );
  delay(1000);
  
  
}
