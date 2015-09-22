/*
 * Rui Santos 
 * Complete Project Details http://randomnerdtutorials.com
*/
 
int ledPin=9; // here we are calling ledPin to the pin 9
int buttonPin = 4; //here we are calling buttonPin to the pin 4

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT) ; // the buttonPin is an INPUT because we want to read its state
}

void loop()
{
  // if the pushbutton is being pressed
  if (digitalRead(buttonPin) == HIGH){
    digitalWrite(ledPin,HIGH); // then, the LED will turn on
  } 
  else{
    digitalWrite(ledPin,LOW); // else, it will be turned down
  }
}
