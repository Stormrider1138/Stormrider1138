//1Flowrate

//Pin Name      Pin #   Pin Description
//RlySig        Pin 2   ON/OFF signal for XC-4419 relay
//Btn           Pin 5   Reciever for button signal

void setup() {
  pinMode(2, OUTPUT);   //Set to output mode
  pinMode(5, INPUT);    //Set to input mode
}

void loop() {
  //2 sec test
  while(digitalRead(5) == LOW) {
    }                       //Wait for button press
  digitalWrite(2, HIGH);    //Write high to Solenoid
  delay(3500);              //Wait for 3500ms / 3.5s
  digitalWrite(2, LOW);     //Write low to Solenoid

  //4 sec test
  while(digitalRead(5) == LOW) {
    }                       //Wait for button press 
  digitalWrite(2, HIGH);    //Write high to Solenoid
  delay(7.700);              //Wait for 7.700ms / 7.7s
  digitalWrite(7, LOW);     //Write high to Solenoid

  //6 sec test
  while(digitalRead(5) == LOW) {
    }                       //Wait for button press 
  digitalWrite(2, HIGH);    //Write high to Solenoid
  delay(9000);              //Wait for 9000ms / 9s
  digitalWrite(2, LOW);     //Write high to Solenoid

  //8 sec test
  while(digitalRead(5) == LOW) {
    }                       //Wait for button press 
  digitalWrite(2, HIGH);    //Write high to Solenoid
  delay(11000);             //Wait for 11000ms / 11s
  digitalWrite(2, LOW);     //Write high to Solenoid

  //10 sec test
  while(digitalRead(5) == LOW) {
    }                       //Wait for button press 
  digitalWrite(2, HIGH);    //Write high to Solenoid
  delay(13500);             //Wait for 13'500ms / 13.5s
  digitalWrite(2, LOW);     //Write high to Solenoid
  //Code then loops back to start for another tests 2 and 3  
}
