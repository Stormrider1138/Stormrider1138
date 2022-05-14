//3Calibration

//Pin Name      Pin #   Pin Description
//RlySig1       Pin 2   ON/OFF signal for XC-4419 relay 1
//RlySig2       Pin 3   ON/OFF signal for XC-4419 relay 2
//RlySig3       Pin 4   ON/OFF signal for XC-4419 relay 3
//Btn           Pin 5   Reciever for button signal

void setup() {
  pinMode(2, OUTPUT);   //Set to output mode
  pinMode(3, OUTPUT);   //Set to output mode
  pinMode(4, OUTPUT);   //Set to output mode
  pinMode(5, INPUT);    //Set to input mode
}

void loop() {
  //Loop for 3 tests for calibration of solenoid 2
  for (int i=0; i<3; i++) {
    //2 sec test
    while(digitalRead(5) == LOW) {
      }                       //Wait for button press
    digitalWrite(3, HIGH);    //Write high to Solenoid 2
    delay(2000);              //Wait for 2000ms / 2s
    digitalWrite(3, LOW);     //Write low to Solenoid 2
  
    //4 sec test
    while(digitalRead(5) == LOW) {
      }                       //Wait for button press 
    digitalWrite(3, HIGH);    //Write high to Solenoid 2
    delay(4000);              //Wait for 4000ms / 4s
    digitalWrite(3, LOW);     //Write low to Solenoid 2
  
    //6 sec test
    while(digitalRead(5) == LOW) {
      }                       //Wait for button press 
    digitalWrite(3, HIGH);    //Write high to Solenoid 2
    delay(6000);              //Wait for 6000ms / 6s
    digitalWrite(3, LOW);     //Write low to Solenoid 2
  
    //8 sec test
    while(digitalRead(5) == LOW) {
      }                       //Wait for button press 
    digitalWrite(3, HIGH);    //Write high to Solenoid 2
    delay(8000);              //Wait for 8000ms / 8s
    digitalWrite(3, LOW);     //Write low to Solenoid 2
  
    //10 sec test
    while(digitalRead(5) == LOW) {
      }                       //Wait for button press 
    digitalWrite(3, HIGH);    //Write high to Solenoid 2
    delay(10000);             //Wait for 10'000ms / 10s
    digitalWrite(3, LOW);     //Write low to Solenoid 2
  }
  
  //Loop for 3 tests for calibration of solenoid 3
  for (int i=0; i<3;i++) {
    //2 sec test
    while(digitalRead(5) == LOW) {
      }                       //Wait for button press
    digitalWrite(4, HIGH);    //Write high to Solenoid 3
    delay(2000);              //Wait for 2000ms / 2s
    digitalWrite(4, LOW);     //Write low to Solenoid 3
  
    //4 sec test
    while(digitalRead(5) == LOW) {
      }                       //Wait for button press 
    digitalWrite(4, HIGH);    //Write high to Solenoid 3
    delay(4000);              //Wait for 4000ms / 4s
    digitalWrite(4, LOW);     //Write low to Solenoid 3
  
    //6 sec test
    while(digitalRead(5) == LOW) {
      }                       //Wait for button press 
    digitalWrite(4, HIGH);    //Write high to Solenoid 3
    delay(6000);              //Wait for 6000ms / 6s
    digitalWrite(4, LOW);     //Write low to Solenoid 3
  
    //8 sec test
    while(digitalRead(5) == LOW) {
      }                       //Wait for button press 
    digitalWrite(4, HIGH);    //Write high to Solenoid 3
    delay(8000);              //Wait for 8000ms / 8s
    digitalWrite(4, LOW);     //Write low to Solenoid 3
  
    //10 sec test
    while(digitalRead(5) == LOW) {
      }                       //Wait for button press 
    digitalWrite(4, HIGH);    //Write high to Solenoid 3
    delay(10000);             //Wait for 10'000ms / 10s
    digitalWrite(4, LOW);     //Write low to Solenoid 3
  }
}
