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
int wait=250;

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
  tone(speaker,c,200);
  delay(wait);
  digitalWrite(led1,LOW);
  
  tone(speaker,c,200);
  digitalWrite(led1,HIGH);
  delay(wait);
  digitalWrite(led1,LOW);
  
  tone(speaker,g,200);
  digitalWrite(led5,HIGH);
  delay(wait);
  digitalWrite(led5,LOW);
  
  tone(speaker,g,200);
  digitalWrite(led5,HIGH);
  delay(wait);
  digitalWrite(led5,LOW);
  
  tone(speaker,A,200);
  digitalWrite(led6,HIGH);
  delay(wait);
  digitalWrite(led6,LOW);
  
  tone(speaker,A,200);
  digitalWrite(led6,HIGH);
  delay(wait);
  digitalWrite(led6,LOW);
  
  tone(speaker,g,200);
  digitalWrite(led5,HIGH);
  delay(wait*2);
  digitalWrite(led5,LOW);
  
  tone(speaker,f,200);
  digitalWrite(led4,HIGH);
  delay(wait);
  digitalWrite(led4,LOW);
  
  tone(speaker,f,200);
  digitalWrite(led4,HIGH);
  delay(wait);
  digitalWrite(led4,LOW);
  
  tone(speaker,e,200);
  digitalWrite(led3,HIGH);
  delay(wait);
  digitalWrite(led3,LOW);
  
  tone(speaker,e,200);
  digitalWrite(led3,HIGH);
  delay(wait);
  digitalWrite(led3,LOW);
  
  tone(speaker,d,200);
  digitalWrite(led2,HIGH);
  delay(wait);
  digitalWrite(led2,LOW);
  
  tone(speaker,d,200);
  digitalWrite(led2,HIGH);
  delay(wait);
  digitalWrite(led2,LOW);
  
  tone(speaker,c,200);
  digitalWrite(led1,HIGH);
  delay(wait*4);
  digitalWrite(led1,LOW);
}
