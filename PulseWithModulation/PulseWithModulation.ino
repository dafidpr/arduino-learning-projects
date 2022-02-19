int servoPin = 3;
int pulseTime;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(servoPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(pulseTime = 544; pulseTime <= 2400; pulseTime += 20){
      Serial.println(pulseTime);
      digitalWrite(servoPin, HIGH);
      delayMicroseconds(pulseTime);
      digitalWrite(servoPin, LOW);
      delay(25);
  }

    for(pulseTime = 2400; pulseTime >= 544; pulseTime -= 20){
      Serial.println(pulseTime);
      digitalWrite(servoPin, HIGH);
      delayMicroseconds(pulseTime);
      digitalWrite(servoPin, LOW);
      delay(25);
  }

}
