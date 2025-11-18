#include <Arduino.h>

// put global variables here:
int leds[] = {2, 3, 4, 5, 6, 7, 8, 9};
int nbLeds = 8;

void setup()
{
  // put your setup code here, to run once:

  // Initialize all LED pins as OUTPUT and set them LOW
  for (int i = 0; i < nbLeds; i++)
  {
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], LOW);
  }
}

void loop()
{
  // put your main code here, to run repeatedly:

  // Turn on each LED one by one with a delay
  for (int i = 0; i < nbLeds; i++)
  {
    digitalWrite(leds[i], HIGH);
    delay(500);
  }

  // Make all LEDs flash for 5 seconds
  unsigned long startTime = millis();
  while (millis() - startTime < 5000)
  {
    for (int i = 0; i < nbLeds; i++)
    {
      digitalWrite(leds[i], HIGH);
    }
    delay(500);
    for (int i = 0; i < nbLeds; i++)
    {
      digitalWrite(leds[i], LOW);
    }
    delay(500);
  }

  // Turn off all LEDs and start again
  for (int i = 0; i < nbLeds; i++)
  {
    digitalWrite(leds[i], LOW);
  }
  delay(1000);
}
