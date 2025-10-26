#include <Arduino.h>

float vOut;
float vRead = A0;
float analogValue;
int LED_PIN = 11;

void setup()
{
  pinMode(vRead, INPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  analogValue = analogRead(vRead);
  vOut = (analogValue * 5.0) / 1023.0;
  if (vOut >= 4.0)
  {
    digitalWrite(LED_PIN, HIGH);
  }
  else
  {
    digitalWrite(LED_PIN, LOW);
  }

  Serial.println(vOut);
  delay(500);
}
