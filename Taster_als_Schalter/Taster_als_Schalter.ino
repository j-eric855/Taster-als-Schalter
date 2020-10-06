#include <OneButton.h>
#define LED 2

OneButton taster(10, false);
bool merkerLed = LOW;

void setup()
{
  pinMode(LED, OUTPUT);


  taster.attachClick(Taster_Funktion);

}

void loop()
{
  taster.tick();


  delay(10);


  digitalWrite(LED, merkerLed);

}

void Taster_Funktion()
{
  merkerLed = !merkerLed;
}

