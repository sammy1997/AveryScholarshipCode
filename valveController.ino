const int solenoidPin = 4;    //This is the output pin on the Arduino to the valve

void setup() {
  //combine the other code setup.
  pinMode(solenoidPin, OUTPUT);           //Sets the pin as an output
}

void loop() {
  // Use if else block to switch on or off the valve.  
  digitalWrite(solenoidPin, HIGH);    //Switch Solenoid ON
  delay(1000);                      //Wait 1 Second
  digitalWrite(solenoidPin, LOW);     //Switch Solenoid OFF
  delay(1000);                      //Wait 1 Second
}
