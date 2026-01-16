
const int RED_LED = 7;
const int GREEN_LED = 6;
const int BLUE_LED = 5;

bool redState = false;
bool greenState = false;
bool blueState = false;

void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    char c = Serial.read();
    c = tolower(c);

    if (c == '1') {
      redState = !redState;
      digitalWrite(RED_LED, redState);
    }
    else if (c == '2') {
      greenState = !greenState;
      digitalWrite(GREEN_LED, greenState);
    }
    else if (c == '3') {
      blueState = !blueState;
      digitalWrite(BLUE_LED, blueState);
    }
    else if (c == 'o') {
      digitalWrite(RED_LED, HIGH);
      digitalWrite(GREEN_LED, HIGH);
      digitalWrite(BLUE_LED, HIGH);
    }
    else if (c == 'f') {
      digitalWrite(RED_LED, LOW);
      digitalWrite(GREEN_LED, LOW);
      digitalWrite(BLUE_LED, LOW);
    }
  }
}
