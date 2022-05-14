//3Inline

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
  while(digitalRead(5) == LOW) {
    }                       //Wait for button press
  
  //Dispense water from reservior 1
  digitalWrite(3, HIGH);    //Write high to Relay 2
  delay(5000);              //Debounce delay + time delay, dispense water for 5s
  digitalWrite(3, LOW);     //Write high to Relay 2
  delay(5000);              //Safety delay, allow observe if dispensing has stopped
  
  //Dispense water from reservior 2
  digitalWrite(4, HIGH);    //Write high to Relay 3
  delay(5000);              //Time delay, dispense water for 5s
  digitalWrite(4, LOW);     //Write high to Relay 3
  delay(5000);              //Safety delay, allow observe if dispensing has stopped

  //Dispense water from water supply in
  digitalWrite(2, HIGH);    //Write high to Relay 1
  delay(10000);             //Time delay, dispense water for 10s
  digitalWrite(2, LOW);     //Write high to Relay 1
  delay(5000);              //Safety delay, allow observe if dispensing has stopped
}
