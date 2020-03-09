int led = D7;
 //so for the name Nick we need:
  //-. .. -.-. -.-
char myMorse[] = {'-', '.', '.', '.', '-', '.', '-', '.', '-', '.', '-'}; //my first name split into a char array of morse symbols

//function for long sequence -

void longSequence()
{
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}

//function for short sequence .

void shortSequence()
{
  digitalWrite(led, HIGH);
  delay(300);
  digitalWrite(led, LOW);
  delay(300);
}


void setup() {
  pinMode(led, OUTPUT); //basic setup
}

void loop() {

  //loop through array of morse characters in execute long sequence or short sequence based on if condition  
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

