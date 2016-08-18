int led1=12;
int led2=13;
int wait=1000;

// the setup routine runs once when you press reset:
void setup()
{                
  // initialize the digital pin as an output.
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}

// the loop routine runs over and over again forever:
void loop()
{
  digitalWrite(led1,HIGH);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2,LOW);
  delay(wait);               // wait for a second
  digitalWrite(led1,LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led2,HIGH);
  delay(wait);               // wait for a second
}
