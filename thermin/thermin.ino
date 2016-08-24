int sensorValue;
int sensorLow=1023;
int sensorHigh=0;
const int ledPin= 13;


void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  digitalWrite(ledPin,HIGH);
//  while(millis() <5000){
//    sensorValue=analogRead(A0);
//    if(sensorValue>sensorHigh){
//      sensorHigh=sensorValue;
//    }
//    if (sensorValue<sensorLow){
//      sensorLow =sensorValue;
//    }
//    
//  }
  digitalWrite(ledPin,LOW);
}

int b = 247;
int c = 262;
int ef = 311;
int fs = 370;
int g = 392;
int gs = 415;

void play(int note, int length) {
  tone(8, note, length);
  delay(length);
}

void loop() {
  // put your main code here, to run repeatedly:
  //sensorValue= analogRead(A0);
  //int pitch = map(sensorValue,sensorLow,sensorHigh,50,4000);
  //tone(8, pitch, 10000/pitch);
  //delay(pitch/5);

  

  play(c, 3000);
  play(ef, 1000);
  play(fs, 1000);
  play(g, 1000);
  play(gs, 1000);
  play( c, 1000);
  play( b, 1000);
  delay(4000);
}
