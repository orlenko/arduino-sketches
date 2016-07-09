const int digitaloutred=6;
const int digitaloutgreen=3;
const int digitaloutblue=5;


int redValue = 255;
int blueValue = 0;
int greenValue = 0;

const int RED = 0;
const int GREEN = 1;
const int BLUE = 2;

int growingColour = GREEN;
int shrinkingColour = RED;
int constantColour = BLUE;

int colourDigitalOuts[] = {digitaloutred, digitaloutgreen, digitaloutblue};
int colourValues[] = {redValue, greenValue, blueValue};

void setup() {
  pinMode(digitaloutred,OUTPUT);
  pinMode(digitaloutgreen,OUTPUT);
  pinMode(digitaloutblue,OUTPUT);
}

int nextIndex(int index) {
  if (index == 2) {
    return 0;
  }
  return index + 1;
}

void loop() {
  if (colourValues[shrinkingColour] == 0) {
    // Switch the colours
    shrinkingColour = nextIndex(shrinkingColour);
    growingColour = nextIndex(growingColour);
    constantColour = nextIndex(constantColour);
  }
  colourValues[growingColour]++;
  colourValues[shrinkingColour]--;

  analogWrite(colourDigitalOuts[growingColour], colourValues[growingColour]);
  analogWrite(colourDigitalOuts[shrinkingColour], colourValues[shrinkingColour]);
  analogWrite(colourDigitalOuts[constantColour], colourValues[constantColour]);
  delay(10);
}
