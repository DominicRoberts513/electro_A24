const int pinBtn = 2;
const int pinLED = 7;
int btnState = 0;
const int pinSensor = 9;
int sensorDat = 0;

void setup() {
  Serial.begin(9600);

  pinMode(pinLED, OUTPUT);
  pinMode(pinBtn, INPUT);
  pinMode(pinSensor, INPUT);
}

void loop() {
  btnState = digitalRead(pinBtn);
  
  if (btnState == 1) {
    digitalWrite(pinLED, 1);
    delay(100);
    digitalWrite(pinLED, 0);
    delay(100);
  } else {
    digitalWrite(pinLED, 0);
  }
  digitalWrite(pinLED, 0);


  sensorDat = analogRead(A9);
  Serial.println(sensorDat);
}

