// C++ code
//

int led_green = 2;
int led_yellow = 5;
int led_red = 9;
int sleep = 1000;

void setup()
{
  pinMode(led_green, OUTPUT);
  pinMode(led_red, OUTPUT);
  pinMode(led_yellow, OUTPUT);
}

void loop()
{
  // stage 01: Red light on, yellow and green off
  digitalWrite(led_green, LOW);
  digitalWrite(led_red, HIGH);
  delay(sleep);//stop by value of variable sleep for second
  // stage 02: Turn off red and on yellow
  digitalWrite(led_red, LOW);
  digitalWrite(led_yellow, HIGH);
  delay(sleep);
  // stage 03: Turn off yellow and on green light
  digitalWrite(led_yellow, LOW);
  digitalWrite(led_green, HIGH);  
  delay(sleep);
}
