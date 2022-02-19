
unsigned long intervalLed1 = 1000;
unsigned long previousMillis1 = 0;

unsigned long intervalLed2 = 150;
unsigned long previousMillis2 = 0;

const int pinLED1 = 8;
const int pinLED2 = 9;
const int pinButton = 10;

void setup() {

    pinMode(pinLED1, OUTPUT);
    pinMode(pinLED2, OUTPUT);
    pinMode(pinButton, INPUT_PULLUP);
    
    digitalWrite(pinLED1, LOW);
    digitalWrite(pinLED2, LOW);

}

void loop() {

      if(digitalRead(pinButton) == LOW){

          digitalWrite(pinLED1, HIGH);
          digitalWrite(pinLED2, HIGH);
        
      } else {

          digitalWrite(pinLED1, LOW);
          digitalWrite(pinLED2, LOW);
          
      }

//    if((millis() - previousMillis1) >= intervalLed1){
//  
//        previousMillis1 = millis();
//        digitalWrite(pinLED1, !digitalRead(pinLED1));
// 
//    }
//
//    if((millis() - previousMillis2) >= intervalLed2){
//  
//        previousMillis2 = millis();
//        digitalWrite(pinLED2, !digitalRead(pinLED2));
// 
//    }

}
