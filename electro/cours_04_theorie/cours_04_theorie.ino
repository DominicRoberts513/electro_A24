#include <Servo.h>

const int pinServo = 6;
const int pinPot = A5;
int potVal;
int i;
int rotation = 360;
Servo monServo;
int posServo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600);
  monServo.attach(pinServo);
  pinMode(pinPot, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // for(i = 0; i <= rotation; i++) {
  //   monServo.write(i);
  // }
  // for (i = 0; i <= rotation; i++) {
  //   monServo.write(180 - i);
  // }
  potVal = analogRead(pinPot);
  
  Serial.print("/capteur1 ");
  Serial.println(potVal);
  // posServo = map(potVal, 0, 1024, 0, 180);
  // monServo.write(posServo);

  // monServo.write(potVal);
}
