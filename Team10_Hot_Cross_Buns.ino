int led1=13;
int led2=12;
int led3=11;
int led4=10;
int led5=9;
int led6=8;
int led7=7;
int led8=6;
int led9=5;
int speaker=4;
int wait=500;

int note[]=
{
  262,
  294,
  330,
  349,
  392,
  440,
  494,
  523
};

int c=note[0];
int d=note[1];
int e=note[2];
int f=note[3];
int g=note[4];
int A=note[5];
int B=note[6];
int C=note[7];

void setup()
{
  for(int z=4;z<14;z++)
  {
    pinMode(z,OUTPUT);
  }
}

void loop()
{
  digitalWrite(led1,HIGH);
  tone(speaker,B,200);
  delay(wait);
  digitalWrite(led1,LOW);
  
  tone(speaker,A,200);
  digitalWrite(led1,HIGH);
  delay(wait);
  digitalWrite(led1,LOW);
  
  tone(speaker,g,200);
  digitalWrite(led5,HIGH);
  delay(wait);
  digitalWrite(led5,LOW);
  delay(wait);
  
  //2
  
  digitalWrite(led1,HIGH);
  tone(speaker,B,200);
  delay(wait);
  digitalWrite(led1,LOW);
  
  tone(speaker,A,200);
  digitalWrite(led1,HIGH);
  delay(wait);
  digitalWrite(led1,LOW);
  
  tone(speaker,g,200);
  digitalWrite(led5,HIGH);
  delay(wait);
  digitalWrite(led5,LOW);
  delay(wait);
  
  //3
  
  digitalWrite(led1,HIGH);
  tone(speaker,g,200);
  delay(wait/2);
  digitalWrite(led1,LOW);
  
  digitalWrite(led1,HIGH);
  tone(speaker,g,200);
  delay(wait/2);
  digitalWrite(led1,LOW);
  
  digitalWrite(led1,HIGH);
  tone(speaker,g,200);
  delay(wait/2);
  digitalWrite(led1,LOW);
  
  digitalWrite(led1,HIGH);
  tone(speaker,g,200);
  delay(wait/2);
  digitalWrite(led1,LOW);
  
  digitalWrite(led1,HIGH);
  tone(speaker,A,200);
  delay(wait/2);
  digitalWrite(led1,LOW);
  
  digitalWrite(led1,HIGH);
  tone(speaker,A,200);
  delay(wait/2);
  digitalWrite(led1,LOW);
  
  digitalWrite(led1,HIGH);
  tone(speaker,A,200);
  delay(wait/2);
  digitalWrite(led1,LOW);
  
  digitalWrite(led1,HIGH);
  tone(speaker,A,200);
  delay(wait/2);
  digitalWrite(led1,LOW);
  
  //4
  
  digitalWrite(led1,HIGH);
  tone(speaker,B,200);
  delay(wait);
  digitalWrite(led1,LOW);
  
  tone(speaker,A,200);
  digitalWrite(led1,HIGH);
  delay(wait);
  digitalWrite(led1,LOW);
  
  tone(speaker,g,200);
  digitalWrite(led5,HIGH);
  delay(wait);
  digitalWrite(led5,LOW);
  delay(wait);
  
}
