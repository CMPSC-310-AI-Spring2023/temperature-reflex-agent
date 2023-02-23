/*
Andrew Briercheck
Nic Ingerson
*/

int sensePin = A0;
int sensorInput;
double temp;
int led = 3;

//Set desired temperature of the environment
float desiredTemp = 20.00;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  sensorInput = analogRead(A0);
  temp = (double)sensorInput / 1024; //find percentage of input reading
  temp = temp * 5; //multiply by 5V to get voltage
  temp = temp - 0.5; //Subtract the offset
  temp = temp * 100; //Convert to degrees (celsius)

  //turn led on if temperature deviates 5 degrees C from desired temp
  if (temp < desiredTemp - 2.0 || temp > desiredTemp + 2.0)
  {
    digitalWrite(led, HIGH);
    //debugging output
    Serial.print("LED On");
  }
  else
  {
    digitalWrite(led, LOW); //turn off LED
  }

  //print the current temperature
  Serial.print("Current Temperature: ");
  Serial.println(temp);
  delay(2000);
}
