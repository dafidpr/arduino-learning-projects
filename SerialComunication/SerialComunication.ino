#include <SoftwareSerial.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
//pin harus mempunyai tanda ~
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val;
  if(Serial.available()){

//  Untuk mengatur kecerahan lampu LED
    val = Serial.parseInt();
    analogWrite(11, val);

//    char temp = Serial.read();
//    String temp = Serial.readStringUntil('\n');
//    if(temp == "on"){
//    
//        digitalWrite(13, HIGH);
//        Serial.println("Lampu Sudah Nyala");
//        
//    } else if(temp == "off"){
//
//        digitalWrite(13, LOW);
//        Serial.println("Lampu Sudah Mati");
//    }
  }
}
