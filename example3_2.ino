/*
 * Rui Santos 
 * Complete Project Details http://randomnerdtutorials.com
*/

//initializing our variables
int potPin = A2;    // select the input pin for the potentiometer
int ledPin1 = 3;      // select the pin for the LEDs
int ledPin2 = 5;
int ledPin3 = 8;
int ledPin4 = 11;
int sensorValue = 0;  // variable to store the value coming from the sensor
int ledValue = 0;

void setup() {
  Serial.begin(9600); // initializing serial connection
  // declare the ledPins as OUTPUTs:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);  
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(potPin);
  Serial.println(sensorValue);
 
  if (sensorValue > 100)
 	digitalWrite(ledPin1,HIGH);
  if (sensorValue < 100)
 	digitalWrite(ledPin1,LOW);
  if (sensorValue > 407)
 	digitalWrite(ledPin2,HIGH);
  if (sensorValue < 407)
 	digitalWrite(ledPin2,LOW); 
  if (sensorValue > 615)
 	digitalWrite(ledPin3,HIGH);
  if (sensorValue < 615)
 	digitalWrite(ledPin3,LOW); 
  if (sensorValue > 922 )
 	digitalWrite(ledPin4,HIGH);
  if (sensorValue < 922)
 	digitalWrite(ledPin4,LOW);
}
