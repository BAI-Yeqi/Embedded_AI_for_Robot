/*
Please read this before uploading the program.
Firstly, think of an appropriate name for you Bluetooth device, eg. Redtooth. Please do not choose Null.
Next, think of a 4 digits pin number. Please do not choose 1234.
Thirdly, decide on a baudrate that your bluetooth device will be running on. *Hints, look into your buildabot program.*
Lastly, wire up the connections as shown in your AT Command Guide.
Once you done, please proceed to upload the program and follow the instructions shown on your Serial Monitor.
(The Serial Monitor is located at the top right hand corner of this window)
*/

#include <SoftwareSerial.h>
SoftwareSerial A2A(8,9);

String Name, Baudrate, Pin;
String Reply1 = "Null";
String Reply2 = "Null";
String Reply3 = "Null";

void setup() {
  AT_Command();
}

void loop() {
 //do nothing
  delay(50);
}

void AT_Command() {
  Serial.begin(9600);
  A2A.begin(9600); // Set this value to your current baudrate. Note that, by default your bluetooth module's baudrate is 9600
  while (!Serial);
  
  Serial.println("Please enter your group name and press enter.");
  while (!Serial.available());
  Name = Serial.readString();
  A2A.print("AT+NAME" + Name);
  delay(600);
  if (A2A.available() > 0) {
    Reply1 = A2A.readString();
    Serial.println(Reply1);
  }
  Serial.println("");
  delay(1000);

  Serial.println("Please enter your 4-digits pin number and press enter.");
  while (!Serial.available());
  Pin = Serial.readString();
  A2A.print("AT+PIN" + Pin);
  delay(600);
  if (A2A.available() > 0) {
    Reply2 = A2A.readString();
    Serial.println(Reply2);
  }
  Serial.println("");
  delay(1000);
  
  Serial.println("Please enter your Baudrate number and press enter.");
  Serial.println("The Baudrate numbers are:");
  Serial.println("1 - 1200bps");
  Serial.println("2 - 2400bps");
  Serial.println("3 - 4800bps");
  Serial.println("4 - 9600bps");
  Serial.println("5 - 19200bps");
  Serial.println("6 - 38400bps");
  Serial.println("7 - 57600bps");
  Serial.println("8 - 115200bps");
  Serial.println("9 - 230400bps");
  while (!Serial.available());
  Baudrate = Serial.readString();
  A2A.print("AT+BAUD" + Baudrate);
  delay(600);
  if (A2A.available() > 0) {
    Reply3 = A2A.readString();
    Serial.println(Reply3);
  }
  Serial.println("");

  if (Reply1 != "Null") {
    Serial.println("Name has been sucessfully changed!");
  }
  if (Reply2 != "Null") {
    Serial.println("Pin has been sucessfully changed!");
  }
  if (Reply3 != "Null") {
    Serial.println("Baudrate has been sucessfully changed!");
  }
  Serial.println("Thank you, Goodbye!");
  Serial.end();
}

