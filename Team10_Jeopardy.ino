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
int wait=1000;

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
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
  pinMode(led9,OUTPUT);
  pinMode(speaker,OUTPUT);
}

void loop()
{
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  digitalWrite(led7,HIGH);
  digitalWrite(led8,HIGH);
  digitalWrite(led9,HIGH);
  delay(wait);
  digitalWrite(led1,LOW);
  digitalWrite(led9,LOW);
  delay(wait);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led8,LOW);
  digitalWrite(led9,LOW);
  delay(wait);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  digitalWrite(led9,LOW);
  delay(wait);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  digitalWrite(led9,LOW);
  delay(wait);
  digitalWrite(led5,LOW);
  tone(speaker,700,200);
  delay(200);
  tone(speaker,700,200);
  delay(200);
  tone(speaker,700,200);
  delay(200);
}
