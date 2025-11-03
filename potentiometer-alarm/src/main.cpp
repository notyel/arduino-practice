#include <Arduino.h>

const int POT_PIN = A1;      // Pin del potenciómetro
const int RED_LED_PIN = 11;  // LED indicador
const int GREEN_LED_PIN = 9; // LED indicador
const int BUZZER_PIN = 8;    // Pin del buzzer
float vOut = 0.0;            // Voltaje calculado
int analogValue = 0;         // Valor analógico leído

const float THRESHOLD = 4.0; // Umbral de activación (en voltios)

void playAlarmTone()
{
  tone(BUZZER_PIN, 1000);
  delay(200);
  noTone(BUZZER_PIN);
  delay(300);
}

void setup()
{
  pinMode(POT_PIN, INPUT);
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  analogValue = analogRead(POT_PIN);
  vOut = (analogValue * 5.0) / 1023.0;

  if (vOut >= THRESHOLD)
  {
    digitalWrite(RED_LED_PIN, HIGH);
    digitalWrite(GREEN_LED_PIN, LOW);
    playAlarmTone();
  }
  else
  {
    digitalWrite(RED_LED_PIN, LOW);
    digitalWrite(GREEN_LED_PIN, HIGH);
    noTone(BUZZER_PIN); // Apaga el buzzer
  }

  Serial.print("Voltaje: ");
  Serial.print(vOut);
  Serial.print(" V -> Estado: ");
  Serial.println(vOut >= THRESHOLD ? "ALARMA" : "Normal");

  delay(300);
}
