const int sensorPin=A0;

const float coldTemp=22.0;
const float warmTemp = 24.0;

const int redPin = 2;
const int yellowPin = 3;
const int bluePin = 4;

void setup() {

  Serial.begin(9600);
  for(int pinNumber=2;pinNumber<5;pinNumber++){
    pinMode(pinNumber,OUTPUT);
    digitalWrite(pinNumber,LOW);
  }
}

void loop() {
  int sensorVal= analogRead(sensorPin);
  float voltage = sensorVal / 1024.0 * 5.0;
  float temp = (voltage - 0.5) * 100;

  Serial.print("Sensor value: ");   Serial.print(sensorVal);
  Serial.print("; Voltage: "); Serial.print(voltage);
  Serial.print("; Temperature, C: "); Serial.print(temp);
  Serial.print("\n");

  if (temp < coldTemp) {
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(bluePin, HIGH);
  }
  if (coldTemp < temp && temp < warmTemp) {
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, HIGH);
    digitalWrite(bluePin, LOW);
  }
  if (warmTemp < temp) {
    digitalWrite(redPin, HIGH);
    digitalWrite(yellowPin, LOW);
    digitalWrite(bluePin, LOW);
  }

}
