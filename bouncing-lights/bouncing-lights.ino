const int buttonpin = 8;
//  PINS:      0  1  2    3    4    5    6    7
int times[] = {0, 0, 60, 40, 20, 20, 40, 60};

void setup() {
  for (int pinNumber = 2; pinNumber < 8; pinNumber++) {
    pinMode(pinNumber, OUTPUT);
    digitalWrite(pinNumber, LOW);
  }
  pinMode(buttonpin, INPUT);
}

int delayByPin(int pin) {
  // For pin 2, we have to return 200
  // For pin 3, return 160
  // etc
  return 300 - (pin - 2) * 40;
}

void loop() {
  int buttonstate = digitalRead(buttonpin);
  if (buttonstate == LOW) {
    for (int pinNumber = 2; pinNumber < 8; pinNumber++) {
      digitalWrite(pinNumber, LOW);
    }
  } else{
    for (float maxHeight = 2.0; maxHeight < 7.0; maxHeight *= 1.2) {
      for(int pinNumber = 7; pinNumber > maxHeight; pinNumber--){
        digitalWrite(pinNumber,HIGH);
        delay(delayByPin(pinNumber));
        digitalWrite(pinNumber,LOW);
      }
        for(int pinNumber = int(maxHeight); pinNumber < 8; pinNumber++){
        digitalWrite(pinNumber,HIGH);
        delay(delayByPin(pinNumber));
        digitalWrite(pinNumber,LOW); 
      }
    }
  }
}
