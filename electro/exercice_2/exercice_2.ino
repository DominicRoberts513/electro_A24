const int SW = 3;
const int VRX = A10;
const int VRY = A9;

const int pinR = 7;
const int pinG = 8;
const int pinB = 9;

int SWVal;
int VRXVal;
int VRYVal;

int rVal;
int gVal;
int bVal;

int intensite;

void setup() {
  Serial.begin(9600);

  pinMode(SW, INPUT);
  pinMode(VRX, INPUT);
  pinMode(VRY, INPUT);
  

  pinMode(pinR, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(pinB, OUTPUT);
}

void loop() {
  SWVal = analogRead(SW);
  VRXVal = analogRead(VRX);
  VRYVal = analogRead(VRY);

  intensite = VRYVal;

  rVal = intensite * (1024 - VRXVal);
  gVal = intensite * 0;
  bVal = intensite * VRXVal;

  analogWrite(pinR, rVal);
  analogWrite(pinG, gVal);
  analogWrite(pinB, bVal);
  // if(VRXVal != savedVRX){
  //   savedVRX = VRXVal;
  //   Serial.println("Red = " + savedVRX );
  // }

  // Serial.println(SWVal);
  Serial.println(VRXVal);
  // Serial.println(VRYVal);
}