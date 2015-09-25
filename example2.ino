/*
 * Rui Santos 
 * Complete Project Details http://randomnerdtutorials.com
*/
 
int redPin = 10; // here we are calling redPin to the pin 10
int yellowPin = 5; // here we are calling yellowPin to the pin 5
int greenPin = 2; // here we are calling greenPin to the pin 2


void setup() {
  // here we are initializing our pins as outputs
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  digitalWrite(greenPin, HIGH);   // turn the green LED on
  delay(5000);              // the green LED will be on for 5 seconds
  digitalWrite(greenPin, LOW);    // the green LED will turn off
  digitalWrite(yellowPin, HIGH); // the yellow LED will turn on for 2 second
  delay(2000);
  digitalWrite(yellowPin, LOW); // the yellow LED will turn off
  digitalWrite(redPin, HIGH); // the red LED will turn on for 5 seconds
  delay(5000); 
  digitalWrite(redPin, LOW); // the red LED will turn off            
}
