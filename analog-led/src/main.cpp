#include <Arduino.h>

int RED_LED_PIN = 11; // Pin con capacidad PWM
int brightness = 255; // Nivel de brillo máximo (0-255)
int fadeAmount = -5;  // Disminuye el brillo gradualmente

void setup()
{
  pinMode(RED_LED_PIN, OUTPUT);
}

void loop()
{
  analogWrite(RED_LED_PIN, brightness);
  brightness += fadeAmount;
  if (brightness <= 0 || brightness >= 255)
  {
    fadeAmount = -fadeAmount;
  }
  delay(30);
}
