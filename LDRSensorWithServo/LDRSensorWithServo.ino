#include <Servo.h>

#define LDR_SENSOR A0
#define SERVO_PIN D8

Servo myservo;

void setup() {
  Serial.begin(9600);
  myservo.attach(SERVO_PIN);
  myservo.write(0);
  delay(2000);
}

void loop() {
  int adcValue;
  adcValue = analogRead(LDR_SENSOR);
  Serial.print("Nilai Cahaya : ");
  Serial.println(adcValue);
  
  if(adcValue <= 600 ){
     myservo.write(35);   
     Serial.println("Malam Hari");
     Serial.println("Jendela Tutup");                                
  }else{ 
    myservo.write(135);  
     Serial.println("Siang Hari");
     Serial.println("Jendela Buka");           
  }
  Serial.println("======================="); 
  delay(1000);
}
