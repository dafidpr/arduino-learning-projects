#define LDR_SENSOR A0
#define LED_PIN D4

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  delay(2000);
}

void loop() {
  int adcValue;
  float volt;
  adcValue = analogRead(LDR_SENSOR);
  volt = adcValue * (3.3 / 1023.0);
  Serial.print("Nilai ADC : ");
  Serial.println(adcValue);
  Serial.print("Volt : ");
  Serial.print(volt);
  Serial.println("V");
  
  if(adcValue <= 350 ){
    digitalWrite(LED_PIN, HIGH);
    Serial.println("LED nyala");
  }else{
    digitalWrite(LED_PIN, LOW);
    Serial.println("LED mati");
  }
  Serial.println("============================");
  delay(1000);
}
