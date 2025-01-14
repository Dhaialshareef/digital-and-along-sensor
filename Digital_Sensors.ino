void setup()
{
  pinMode(8, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(10, INPUT);
}

void loop()
{
 if(digitalRead(10) == HIGH)
{
   digitalWrite(8, LOW);
   digitalWrite(12, HIGH);
 }
  else
{
   digitalWrite(8, HIGH);
   digitalWrite(12, LOW);
 }  
}
