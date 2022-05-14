//AmicroSD

//Pin Name      Pin #   Pin Description
//RlySig1       Pin 3   ON/OFF signal for XC-4419 relay 1
//RlySig2       Pin 4   ON/OFF signal for XC-4419 relay 2
//RlySig3       Pin 5   ON/OFF signal for XC-4419 relay 3

//Pin Name      Pin #   Pin# Chip Reader    Pin Description
//CS/SS         Pin 10  D8                  Chip Select/Slave Select
//MOSI          Pin 11  D7                  Master Out Slave In
//MISO          Pin 12  D6                  Master In Slave Out
//CLK           Pin 13  D5                  Clock


void setup() {
  pinMode(3, OUTPUT);   //Set to output mode
  pinMode(4, OUTPUT);   //Set to output mode
  pinMode(5, OUTPUT);   //Set to output mode
  
  
  digitalWrite(3, HIGH);    //Write high to Relay 1
  delay(2000);               //Delay for length of dly
  digitalWrite(3, LOW);     //Write low to Relay 1

  digitalWrite(4, HIGH);    //Write high to Relay 2
  delay(4000);               //Delay for length of dly
  digitalWrite(4, LOW);     //Write low to Relay 2

  digitalWrite(5, HIGH);    //Write high to Relay 3
  delay(9000);               //Delay for length of dly
  digitalWrite(5, LOW);     //Write low to Relay 3
}

void loop() {
  
}
