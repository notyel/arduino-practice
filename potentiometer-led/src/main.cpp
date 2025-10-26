#include <Arduino.h>

float vOut;
float vRead = A0;
float analogValue;
int RED_LED_PIN = 11;

void setup()
{
  pinMode(vRead, INPUT);
  pinMode(RED_LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  analogValue = analogRead(vRead);
  vOut = (analogValue * 5.0) / 1023.0;
  if (vOut >= 4.0)
  {
    digitalWrite(RED_LED_PIN, HIGH);
  }
  else
  {
    digitalWrite(RED_LED_PIN, LOW);
  }

  Serial.println(vOut);
  delay(500);
}
