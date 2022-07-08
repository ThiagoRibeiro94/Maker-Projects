int led = 2;

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  digitalWrite(led, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(led, LOW);
  delay(100); // Wait for 1000 millisecond(s)
}