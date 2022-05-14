//AmicroSD

#include <SD.h>    //Load SD card library
#include <SPI.h>   //Load SPI library 

File file;      //file variable to store file data from microSD card
int dly = 0;    //Integer storage for delay length
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
  
  pinMode(10, OUTPUT);  //Chip select pin set to output

  if (!SD.begin()) {
    while(1) {}   //If microSD card can not be started, do not continue
    }

  //Read delay for relay 1
  file = SD.open("file.txt", FILE_READ);    //Open file to read
  dly = file.read(0,4);                     //Read and store delay value from file
  file.close();                             //Close the file
  //Power on relay 1 for length of dly
  digitalWrite(3, HIGH);    //Write high to Relay 1
  delay(dly);               //Delay for length of dly
  digitalWrite(3, LOW);     //Write low to Relay 1


  //Read delay for relay 2
  file = SD.open("file.txt", FILE_READ);    //Open file to read
  dly = file.read(4,4);                     //Read and store delay value from file
  file.close();                             //Close the file
  //Power on relay 2 for length of dly
  digitalWrite(4, HIGH);    //Write high to Relay 2
  delay(dly);               //Delay for length of dly
  digitalWrite(4, LOW);     //Write low to Relay 2

  
  //Read delay for relay 3
  file = SD.open("file.txt", FILE_READ);    //Open file to read
  dly = file.read(8,4);                     //Read and store delay value from file
  file.close();                             //Close the file
  //Power on relay 3 for length of dly
  digitalWrite(5, HIGH);    //Write high to Relay 3
  delay(dly);               //Delay for length of dly
  digitalWrite(5, LOW);     //Write low to Relay 3
}

void loop() {
  
}
