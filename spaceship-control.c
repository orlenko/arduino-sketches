int switchState = 0;

void setup() {
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

}

void loop() {
  switchState = digitalRead(2);
  if (switchState == HIGH) {
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }
if (switchState==LOW) {
    digitalWrite(3, HIGH);
    delay(80);
    digitalWrite(3,LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(80);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(80);
  }
}
