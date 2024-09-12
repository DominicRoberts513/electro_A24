const int pinR = 9;
int pinRVal = 0;
const int pinV = 10;
int pinVVal = 0;
const int pinB = 11;
int pinBVal = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinR, OUTPUT);
  pinMode(pinV, OUTPUT);
  pinMode(pinB, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 256; i++) {
    if (pinRVal == 0) {
      pinRVal = i;
      analogWrite(pinR, pinRVal);
      delay(10);
    }
    if (pinRVal)
  }
}
