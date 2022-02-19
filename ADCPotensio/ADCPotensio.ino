int ledPin = 3;
int ldrPin = A0;
int value = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
//  int sensorValue = analogRead(A0);
//  int brightness = map(sensorValue, 0, 1023, 0, 225);
//  analogWrite(ledPin, brightness);
//
//  Serial.print("Analog : ");
//  Serial.print(sensorValue);
//  Serial.print(", Brightness : ");
//  Serial.println(brightness);
//  delay(100);

    value = analogRead(ldrPin);
    Serial.print("LDR Value is : ");
    Serial.println(value);
    
//    analogWrite(ledPin, value);

    if(value < 700){
      digitalWrite(ledPin, HIGH);
      
      Serial.println("Lampu Hidup");
    } else {
      digitalWrite(ledPin, LOW);
      Serial.println("Lampu Mati");
    }
    delay(500);

}
