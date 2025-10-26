#include <Arduino.h>

const int RED_LED_PIN = 11;

void setup()
{
  pinMode(RED_LED_PIN, OUTPUT);
}

void loop()
{
  digitalWrite(RED_LED_PIN, HIGH);
  delay(1000);

  digitalWrite(RED_LED_PIN, LOW);
  delay(1000);
}
