#include <SoftwareSerial.h>

SoftwareSerial mySerial(3, 4); // RX, TX

void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  mySerial.begin(9600);
}

void loop() { // run over and over
  if (mySerial.available()) {
    String data = mySerial.readStringUntil('\n');
    Serial.print("Aku menerima dari andi: ");
    Serial.println(data);
  }
  if (Serial.available()) {
    mySerial.println((String)Serial.readStringUntil('\n'));
  }
}
 
