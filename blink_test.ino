//예제 1
void setup()
{
  //pinMode(1, OUTPUT);
  for(int thisPin=1;thisPin<9;thisPin++){
    pinMode(thisPin, OUTPUT);
  }
}

void loop()
{
   for(int thisPin=1;thisPin<9;thisPin++)
   {
  digitalWrite(thisPin, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(thisPin, LOW);
  delay(1000); // Wait for 1000 millisecond(s)

   }
}

//예제2 - 전체 점등

void setup()
{
  int i;
  for(i=1;i<9;i++)
    pinMode(i, OUTPUT);
}

void loop()
{
  int i;
  for(i=1;i<9;i++)
    digitalWrite(i, HIGH);
  	delay(500); // Wait for 1000 millisecond(s)
  
   for(i=1;i<9;i++)
   digitalWrite(i, LOW);
   delay(500); // Wait for 1000 millisecond(s)
}

//예제2-1 

void setup()
{
  pinMode(1, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  digitalWrite(1, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(1, LOW);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  
}


//예제3 - 순차 점등, 순차 소등
void setup()
{
  int i;
  for(i=1;i<9;i++)
    pinMode(i, OUTPUT);
}

void loop()
{
  int i;
  for(i=1;i<9;i++)
  {digitalWrite(i, HIGH);
  	delay(500); // Wait for 1000 millisecond(s)
  }
  for(i=1;i<9;i++)
  {digitalWrite(i, LOW);
   delay(500); // Wait for 1000 millisecond(s)
  }
}

