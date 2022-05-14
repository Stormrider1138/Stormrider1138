//1Solenoid

//Pin Name      Pin #   Pin Description
//RlySig        Pin 2   ON/OFF signal for XC-4419 relay
//Btn           Pin 5   Reciever for button signal

void setup() {
  pinMode(2, OUTPUT);   //Set to output mode
  pinMode(5, INPUT);    //Set to input mode
}

void loop() {
  while(digitalRead(5) == LOW) {
    }                       //Wait for button press

  digitalWrite(2, HIGH);    //Write high to Relay
  delay(5000);              //Debounce delay
}
