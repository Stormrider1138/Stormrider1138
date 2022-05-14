//1Calibration

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
  delay(2000);              //Wait for 2000ms / 2s
  digitalWrite(2, LOW);     //Write low to Solenoid

  //4 sec test
  while(digitalRead(5) == LOW) {
    }                       //Wait for button press
  digitalWrite(2, HIGH);    //Write high to Solenoid
  delay(4000);              //Wait for 4000ms / 4s
  digitalWrite(7, LOW);     //Write low to Solenoid

  //6 sec test
  while(digitalRead(5) == LOW) {
    }                       //Wait for button press 
  digitalWrite(2, HIGH);    //Write high to Solenoid
  delay(6000);              //Wait for 6000ms / 6s
  digitalWrite(2, LOW);     //Write low to Solenoid

  //8 sec test
  while(digitalRead(5) == LOW) {
    }                       //Wait for button press 
  digitalWrite(2, HIGH);    //Write high to Solenoid
  delay(8000);              //Wait for 8000ms / 8s
  digitalWrite(2, LOW);     //Write low to Solenoid

  //10 sec test
  while(digitalRead(5) == LOW) {
    }                       //Wait for button press 
  digitalWrite(2, HIGH);    //Write high to Solenoid
  delay(10000);             //Wait for 10'000ms / 10s
  digitalWrite(2, LOW);     //Write low to Solenoid
  //Code then loops back to start for another tests 2 and 3  
}
