#include <OneButton.h>
#define LED 2

OneButton taster(10, true);
bool merkerLed = HIGH;

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

