//Motion sensor PIR and arduino
//written by: Mohannad Rawashdeh-Raw
//https://www.facebook.com/Mohannad-Rawashdeh-Raw-774983565988641/
const int led=13;
const int pir=2;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  pinMode(pir, INPUT_PULLUP);
}

// the loop routine runs over and over again forever:
void loop() {
  if(digitalRead(pir)==HIGH)
  {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  }
  else
  {
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(200);
  }

}
