int IR1 = 8;
int IR2 = 12;
int IR3 = 13;
int LDR = 7;
int led1 = 3;
int led2 = 5;
int led3 = 6;

int val1;
int val2;
int val3;
int val4;

void setup()
{
  pinMode(IR1, INPUT);
  pinMode(IR2, INPUT);
  pinMode(IR3, INPUT);
  pinMode(LDR, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop()
{
  val1 = digitalRead(IR1);
  val2 = digitalRead(IR2);
  val3 = digitalRead(IR3);
  val4 = digitalRead(LDR);

  if (val4 == HIGH)
  {
    if (val1 == HIGH)
    {
      analogWrite(led1, 500);
      analogWrite(led2, 10);
      analogWrite(led3, 10);
    }
    else if (val2 == HIGH)
    {
      analogWrite(led1, 10);
      analogWrite(led2, 500);
      analogWrite(led3, 10);
    }
    else if (val3 == HIGH)
    {
      analogWrite(led1, 10);
      analogWrite(led2, 10);
      analogWrite(led3, 500);
    }
    else
    {
      analogWrite(led1, 10);
      analogWrite(led2, 10);
      analogWrite(led3, 10);
    }
  }
  else 
  {
    analogWrite(led1, 0);
    analogWrite(led2, 0);
    analogWrite(led3,0);
  }
}