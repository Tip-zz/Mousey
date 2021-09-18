/*
File:   Mousie.ino
Author: Tip Partridge
Origin: 28-Mar-2021
Target: Spark Fun Pro Micro (ATMEGA32U4) Set board as Leonardo
Description: Become a mouse and move back and forth one step each 5 minutes. Intended to defeat login timeout.

Revisions:
        28-Mar-2021 (TEP) v0 Origin
        06-Jun-2021 (TEP) v1.0 Add 5 second LED ON after move.
*/
 #include <Mouse.h>
 #define LEDpin 17    // use pro micro RX LED on D17. Note: on/off reversed

void setup() {
  pinMode(LEDpin, OUTPUT);
}

void loop()
{
  int ii;
  for(ii=1; ii<10; ii++)
    {
    Blip();
    delay(17910);  
    }
  for(ii=0; ii<10; ii++)
    {
    Blip();
    delay(8910);  
    }
  for(ii=1; ii<10; ii++)
    {
    Blip();
    delay(4410);  
    }
  for(ii=1; ii<10; ii++)
    {
    Blip();
    delay(1710
    );  
    }
  for(ii=1; ii<10; ii++)
    {
    Blip();
    delay(810);  
    }
  for(ii=1; ii<10; ii++)
    {
    Blip();
    delay(360);  
    }
  for(ii=1; ii<10; ii++)
    {
    Blip();
    delay(90);  
    }
  Mouse.begin();
  Mouse.move(1,0,0);
  Mouse.move(-1,0,0);
  Mouse.end();
  delay(1000);
  digitalWrite( LEDpin, 0);
  delay(5000);
  digitalWrite( LEDpin, 1);
}

void Blip()
{
// turn on LED for 100ms
  digitalWrite( LEDpin, 0);
  delay(100);
  digitalWrite( LEDpin, 1);
}

