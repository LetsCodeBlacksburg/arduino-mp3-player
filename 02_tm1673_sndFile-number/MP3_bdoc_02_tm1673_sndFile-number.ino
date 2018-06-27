#include <Arduino.h>
#include <TM1637Display.h>

// Module connection pins (Digital Pins). Should match your connections.
#define CLK 8        
#define DIO 9

// The amount of time (in milliseconds) between tests
#define TEST_DELAY   20

TM1637Display display(CLK, DIO);
bool leadingZeros = false;

void setup()
{
  display.setBrightness(0xff);
}

void loop()
{
  // This is just a quick for loop to simulate flipping through tracks...
  Serial.println("============== start of playlist ============");

            //sndFile++ just increments each loop
  for (int sndFile=0 ; sndFile<100 ; sndFile++) {    
    Serial.println(sndFile); // Use to troubleshoot what's going on.
        display.showNumberDec(sndFile, leadingZeros);   // This is it
    delay(TEST_DELAY); 
  }
  Serial.println("============== end of playlist ============");
  leadingZeros = leadingZeros ^ true;     // This toggles w&w/out zeros
}
