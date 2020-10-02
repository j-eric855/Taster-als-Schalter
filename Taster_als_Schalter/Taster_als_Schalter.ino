#include <OneButton.h>
#define LED 2

OneButton taster(10, true);
bool merkerLed = false;

void setup()
{
  pinMode(LED, OUTPUT);


  taster.attachClick(Taster_Funktion);

}

void loop()
{
  taster.tick();


  delay(10);
}

void Taster_Funktion()
{
  if (merkerLed == true)
  {
    digitalWrite(LED, LOW);
    merkerLed = false;
  }
  else
  {
    digitalWrite(LED, HIGH);
    merkerLed = true;
  }
}

