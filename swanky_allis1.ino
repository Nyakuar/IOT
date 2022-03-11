// C++ code
//
int red=1;
int green=2;
int orange=0;

void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(0, OUTPUT);
}

void loop()
{
  digitalWrite(1, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(1, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(2, LOW);
  delay(1000); // wait for 1000 millisecond(s) 
  digitalWrite(0, HIGH);
  delay(1000); // wait for 1000 milliseconnd(s)
   digitalWrite(0, LOW);
  
}

  