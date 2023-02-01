/*
Andrew Briercheck
Nic Ingerson
*/

#include <TMP36.h>

//Create instance of TMP36
TMP36 myTMP36(E16, 3.3);
//Set desired temperature of the environment
float desiredTemp = 69.0;

int led = 3;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  //Get current temperature of the environment
  float envTemp = myTMP36.getTempF();
  //Check if the environment temperature deviates by 10 degrees
  if (envTemp < desiredTemp - 10.0 || envTemp > desiredTemp + 10.0) {
    //Turn on led
    digitalWrite(led, LOW);
    delay(2000);
  }
}
