// source: http://www.learningaboutelectronics.com/Articles/Arduino-motion-sensor-light-circuit.php
//code for motion sensor circuit
const int ledPin= 13;
const int inputPin= 2;

void setup(){
pinMode(ledPin, OUTPUT);
pinMode(inputPin, INPUT);
}

void loop(){
int value= digitalRead(inputPin);

if (value == HIGH)
{
digitalWrite(ledPin, HIGH);
delay(6000);
digitalWrite(ledPin, LOW);
}
else
{
digitalWrite(ledPin, LOW);
}
}
