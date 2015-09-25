/*
 * Rui Santos 
 * Complete Project Details http://randomnerdtutorials.com
*/

int ledPin = 9;           
int ledBrightness = 0;   
int sensorPin = A0;     
int sensorValue = 0;     
    
void setup(void) {
  // We'll send debugging information via the Serial monitor
  Serial.begin(9600);   
}
 
void loop(void) {
  sensorValue = analogRead(sensorPin);  
 
  Serial.print("Sensor reading: ");
  Serial.println(sensorValue);     
  // LED gets brighter the darker it is at the sensor
  // that means we have to -invert- the reading from 0-1023 back to 1023-0
  sensorValue = 1023 - sensorValue;
  //now we have to map 0-1023 to 0-255 since thats the range analogWrite uses
  ledBrightness = map(sensorValue, 0, 1023, 0, 255);
  analogWrite(ledPin, ledBrightness);
  delay(50);
}
