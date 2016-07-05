int switchState = 0;
int counter = 0;
int jingleBells[] = {
  300, 300, 600,
  300, 300, 600,
  300, 300, 450, 150, 1200,
  300, 300, 450, 150,
  300, 300, 300, 150, 150,
  300, 300, 300, 300, 600, 600
  };

int tickCount = 0;

void setup() {
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

}

void click() {
  tickCount = 0;
  while(tickCount < 5) {
    tickCount++;
    digitalWrite(5, HIGH);
    digitalWrite(5, LOW);
  }
}

void loop() {
  switchState = digitalRead(2);
  if (switchState == LOW) {
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  } else {
    digitalWrite(3, LOW);

    counter = 0;
    while (counter < 26) {
      digitalWrite(5, LOW);
      digitalWrite(5, HIGH); // tick
      digitalWrite(random(4, 6), HIGH);
      digitalWrite(random(4, 6), LOW);
      delay(jingleBells[counter]);
      counter++;
    }
//    digitalWrite(4, HIGH);
//    digitalWrite(5, LOW);
//    delay(80);
//    digitalWrite(4, LOW);
//    digitalWrite(5, HIGH);
//    delay(80);
  }
}
