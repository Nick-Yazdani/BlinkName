int led = D7;
char myMorse[] = {'-', '.', '.', '.', '-', '.', '-', '.', '-', '.', '-'};

void longSequence()
{
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}

void shortSequence()
{
  digitalWrite(led, HIGH);
  delay(300);
  digitalWrite(led, LOW);
  delay(300);
}


void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
 
  //so for the name Nick we need:
  //-. .. -.-. -.-
  for(int i = 0; i < sizeof(myMorse)/sizeof(myMorse[0]); i++)
  {
      if(myMorse[i] == '-')
      {
          longSequence();
      }
      else
      {
          shortSequence();
      }
  }

}

