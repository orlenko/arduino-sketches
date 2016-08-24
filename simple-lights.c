
//  PINS:      0  1  2    3    4    5    6    7
int times[] = {0, 0, 60, 40, 20, 20, 40, 60};

void setup() {
 for(int pinNumber = 2; pinNumber < 8; pinNumber++) {
   pinMode(pinNumber, OUTPUT);
   digitalWrite(pinNumber, LOW);
 }
}

void loop() {

  for(int pinNumber = 2; pinNumber < 8; pinNumber++) {
    digitalWrite(pinNumber, HIGH);
    delay(times[pinNumber]);
    digitalWrite(pinNumber, LOW);
  }
  for(int pinNumber=6;pinNumber>2;pinNumber--){
    digitalWrite(pinNumber, HIGH);
    delay(times[pinNumber]);
    digitalWrite(pinNumber,LOW);
  }
  
}

