void setup()
{
  pinMode(13, OUTPUT);
    pinMode(2, OUTPUT);
    pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(10000); // Wait for 1000 millisecond(s)
  digitalWrite(2, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(4, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(2, LOW);
  delay(10); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  // digitalWrite(4, LOW);
  delay(10); // Wait for 1000 millisecond(s)
}