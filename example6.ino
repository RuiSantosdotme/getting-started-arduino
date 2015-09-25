/*
 * Rui Santos 
 * Complete Project Details http://randomnerdtutorials.com
 */
 
int redCar = 13; 
int yellowCar = 12; 
int greenCar = 11; 
int greenPed =2;
int redPed= 3; 
int button =7;
int crossTime=5000;
unsigned long changeTime;


void setup() {
  Serial.begin(9600);
  // here we are initializing our pins as outputs
  pinMode(redCar, OUTPUT);
  pinMode(yellowCar, OUTPUT);
  pinMode(greenCar, OUTPUT);
  pinMode(redPed, OUTPUT);
  pinMode(greenPed, OUTPUT);
  pinMode(button, INPUT);
  //turn on the green loght
  digitalWrite(greenCar, HIGH);
  digitalWrite(redPed, HIGH);
  digitalWrite(redCar, LOW);
  digitalWrite(yellowCar, LOW);
  digitalWrite(greenPed, LOW);
}

void loop() {
  int state= digitalRead(button); /* this variable will tell us
  if the button is pressed */
  /* if the button is pressed and if it has passed 5 seconds since last
   button press */
  if (state == HIGH && (millis() - changeTime) > 5000) {
    //call the function to change the lights
    changeLights();
  }
  Serial.println(state);
}

void changeLights() {
  digitalWrite(greenCar, LOW);    // the green LED will turn off
  digitalWrite(yellowCar, HIGH); // the yellow LED will turn on for 2 second
  delay(2000); 
  
  digitalWrite(yellowCar, LOW); // the yellow LED will turn off
  digitalWrite(redCar, HIGH); // the red LED will turn on for 5 seconds

  digitalWrite(redPed, LOW);
  digitalWrite(greenPed, HIGH);
  delay(crossTime);
  
  // flash the ped green
  for (int x=0; x<10; x++) {
    digitalWrite(greenPed, LOW);
    delay(100);
    digitalWrite(greenPed, HIGH);
    delay(100);
  }
  digitalWrite(greenPed, LOW);
  digitalWrite(redCar, LOW);
  digitalWrite(redPed, HIGH);
  digitalWrite(greenCar, HIGH);

  changeTime = millis();
 }
