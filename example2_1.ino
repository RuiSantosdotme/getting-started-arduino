/*
 * Rui Santos 
 * Complete Project Details http://randomnerdtutorials.com
 */
 
int redCar = 13; 
int yellowCar = 12; 
int greenCar = 11; 
int greenPed =2;
int redPed= 3; 

void setup() {
  // here we are initializing our pins as outputs
  pinMode(redCar, OUTPUT);
  pinMode(yellowCar, OUTPUT);
  pinMode(greenCar, OUTPUT);
  pinMode(redPed, OUTPUT);
  pinMode(greenPed, OUTPUT);
}

void loop() {
  digitalWrite(greenCar, HIGH);   // turn the green LED on
  digitalWrite(redPed, HIGH);
  delay(5000);              // the green LED will be on for 5 seconds
  digitalWrite(greenCar, LOW);    // the green LED will turn off
  digitalWrite(yellowCar, HIGH); // the yellow LED will turn on for 2 second
  delay(2000);
  digitalWrite(yellowCar, LOW); // the yellow LED will turn off
  digitalWrite(redPed, LOW);
  digitalWrite(redCar, HIGH); // the red LED will turn on for 5 seconds
  digitalWrite (greenPed, HIGH);
  delay(5000); 
  digitalWrite(redCar, LOW); // the red LED will turn off            
  digitalWrite(greenPed, LOW);
}
