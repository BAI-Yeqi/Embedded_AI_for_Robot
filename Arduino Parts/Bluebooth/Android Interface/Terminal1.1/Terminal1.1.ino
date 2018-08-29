#include <SoftwareSerial.h>

SoftwareSerial EEBlue(8, 9); // RX | TX

void setup()

{

Serial.begin(9600);

EEBlue.begin(9600); //Default Baud for comm, it may be different for your Module. 
Serial.println("The bluetooth gates are open.\n Connect to HC-05 from any other bluetooth device with 1234 as pairing key!.");

}

void loop()

{

// Feed any data from bluetooth to Terminal. 
if (EEBlue.available()) Serial.write(EEBlue.read());



// Feed all data from termial to bluetooth 
if (Serial.available()){
  //int content = 0;
  //content = Serial.read(); 
  //Serial.println("Received: ");
  //Serial.println(content, DEC);
  EEBlue.println(Serial.readString());
}
  
  

}
