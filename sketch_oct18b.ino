// ATtiny Fading Example
//
// This example introduces variables and the
// analogWrite([pin], [val]) command. analogWrite()
// works on pins 0 and 1.
//

int step = 1;  // variable used to step up or down
int brightness = 0;  // variable used to set the brightness of LED.

void setup()
{
  //The 8-pin ATTinys (25/45/85) all have 5 usable digital output pins 0-4
  pinMode(0, OUTPUT);
}
void loop()
{
  //Set the LED pins to HIGH. This gives power to the LED and turns it on
  analogWrite(0, brightness);
  brightness = brightness + step;
  if (brightness >= 255)
    brightness = 0;
  
  delay(10);
}
