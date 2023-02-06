/*
Andrew Briercheck
Nic Ingerson
*/

int sensePin = A0;
int sensorInput;
double temp;
int led = 3;

//Set desired temperature of the environment
float desiredTemp = 20.56;

void setup(){
  Serial.begin(9600);
}

void loop(){
  sensorInput = analogRead(A0);
  temp = (double)sensorInput / 1024; //find percentage of input reading
  temp = temp * 5; //multiply by 5V to get voltage
  temp = temp - 0.5; //Subtract the offset
  temp = temp * 100; //Convert to degrees (celsius)

  //turn led on if temperature deviates 5 degrees C from desired temp
  if (temp < desiredTemp - 5.0 || temp > desiredTemp + 5.0){
    digitalWrite(led, HIGH);
    Serial.println("LED On");
  }
  else {
    digitalWrite(led, LOW);
  }

  //print the current temperature
  Serial.print("Current Temperature: ");
  Serial.println(temp);
}
