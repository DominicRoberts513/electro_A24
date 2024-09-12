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
      pinRVal = i;
      analogWrite(pinR, pinRVal);
      delay(10);
  }
  for(int i = 0; i < 256; i++) {
      pinRVal = 255 - i;
      pinVVal = i;
      analogWrite(pinR, pinRVal);
      analogWrite(pinV, pinVVal);
      delay(10);
  }
  for(int i = 0; i < 256; i++) {
      pinVVal = 255 - i;
      pinBVal = i;
      analogWrite(pinV, pinVVal);
      analogWrite(pinB, pinBVal);
      delay(10);
  }
  
   

      
}
