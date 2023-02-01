/*
Andrew Briercheck
Nic Ingerson
*/

//Create instance of TMP36
TMP36 myTMP36(E16, 3.3);
//Set desired temperature of the environment
float desiredTemp = 69.0;

void setup() {
  TODO
}

void loop() {
  //Get current temperature of the environment
  float envTemp = myTMP36.getTempF();
  //Check if the environment temperature deviates by 10 degrees
  if (envTemp < desiredTemp - 10.0 || envTemp > desiredTemp + 10.0) {
    return;
  }
}
