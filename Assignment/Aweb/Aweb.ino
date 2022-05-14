//Aweb

#include <SD.h>    //Load SD card library
#include <SPI.h>   //Load SPI library 

File file;      //file variable to store file data from microSD card
int dly = 0;    //Integer storage for delay length
//Pin Name      Pin #   Pin Description
//RlySig1       Pin 2   ON/OFF signal for XC-4419 relay 1
//RlySig2       Pin 3   ON/OFF signal for XC-4419 relay 2
//RlySig3       Pin 4   ON/OFF signal for XC-4419 relay 3

//Pin Name      Pin #   Pin# Farmduino      Pin Description
//Frm1          Pin 5   A6                  Farmduino IO pin 1
//Frm3          Pin 6   A7                  Farmduino IO pin 2
//Frm2          Pin 7   A8                  Farmduino IO pin 3

//Pin Name      Pin #   Pin# Chip Reader    Pin Description
//CS/SS         Pin 10  D8                  Chip Select/Slave Select
//MOSI          Pin 11  D7                  Master Out Slave In
//MISO          Pin 12  D6                  Master In Slave Out
//CLK           Pin 13  D5                  Clock


void setup() {
  pinMode(2, OUTPUT);   //Set to output mode
  pinMode(3, OUTPUT);   //Set to output mode
  pinMode(4, OUTPUT);   //Set to output mode
  
  pinMode(5, INPUT);    //Set to input mode
  pinMode(6, INPUT);    //Set to input mode
  pinMode(7, INPUT);    //Set to input mode

  pinMode(10, OUTPUT);  //Chip select pin set to output

  if (!SD.begin()) {
    while(1)   //If microSD card can not be started, do not continue
    }

  //Read delay for relay 1
  file = SD.open("file.txt", FILE_READ);    //Open file to read
  dly = file.read(0,4)                      //Read and store delay value from file
  file.close();                             //Close the file
  //Wait for activation from web app
  while(digitalRead(5) == LOW) {
    }                       //Wait high state from Farmduino pin A6
  //Power on relay 1 for length of dly  
  digitalWrite(2, HIGH);    //Write high to Relay 1
  delay(dly);               //Delay for length of dly
  digitalWrite(2, LOW);     //Write low to Relay 1


  //Read delay for relay 2
  file = SD.open("file.txt", FILE_READ);    //Open file to read
  dly = file.read(1,4)                      //Read and store delay value from file
  file.close();                             //Close the file
  //Wait for activation from web app
  while(digitalRead(6) == LOW) {
    }                       //Wait high state from Farmduino pin A7
  //Power on relay 2 for length of dly  
  digitalWrite(3, HIGH);    //Write high to Relay 2
  delay(dly);               //Delay for length of dly
  digitalWrite(3, LOW);     //Write low to Relay 2

  
  //Read delay for relay 3
  file = SD.open("file.txt", FILE_READ);    //Open file to read
  dly = file.read(2,4)                      //Read and store delay value from file
  file.close();                             //Close the file
  //Wait for activation from web app
  while(digitalRead(7) == LOW) {
    }                       //Wait high state from Farmduino pin A8
  //Power on relay 3 for length of dly
  digitalWrite(3, HIGH);    //Write high to Relay 3
  delay(dly);               //Delay for length of dly
  digitalWrite(3, LOW);     //Write low to Relay 3
}

void loop() {
  
}
