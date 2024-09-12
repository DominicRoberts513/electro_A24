int a = 9;
int b = 8;
int c = 7;
int d = 6;
int e = 5;
int f = 4;
int g = 3;
int dp = 2;

int cNb = 0;
int pNb = 0;

int randomSeq[7];

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // exerciec 1   
  for(int i = 10; i >= 0; i--) {
    display(i);
    delay(500);
  }

  // bonus
  // if (cNb == pNb) {
  //   cNb = int(random(10));
  // } else {
  //   Serial.println(cNb);
  //   // Serial.println("pNb : " + pNb);
  //   display(cNb);
  //   delay(500);
  //   pNb = cNb;
  //   cNb = int(random(10));
  // }

  // bonus 2
  // bonus2();
}

void display(int i) {
  if (i == 0) {
    nb(1, 1, 1, 1, 1, 1, 0);
  }
  if (i == 1) {
    nb(0, 1, 1, 0, 0, 0, 0);
  }
  if (i == 2) {
    nb(1, 1, 0, 1, 1, 0, 1);
  }
  if (i == 3) {
    nb(1, 1, 1, 1, 0, 0, 1);
  }
  if (i == 4) {
    nb(0, 1, 1, 0, 0, 1, 1);
  }
  if (i == 5) {
    nb(1, 0, 1, 1, 0, 1, 1);
  }
  if (i == 6) {
    nb(1, 0, 1, 1, 1, 1, 1);
  }
  if (i == 7) {
    nb(1, 1, 1, 0, 0, 0, 0);
  }
  if (i == 8) {
    nb(1, 1, 1, 1, 1, 1, 1);
  }
  if (i == 9) {
    nb(1, 1, 1, 1, 0, 1, 1);
  }
}

void nb( int A, int B, int C, int D, int E, int F, int G) {
    digitalWrite(a, A);
    digitalWrite(b, B);
    digitalWrite(c, C);
    digitalWrite(d, D);
    digitalWrite(e, E);
    digitalWrite(f, F);
    digitalWrite(g, G);
}

void bonus2() {
  for(int i = 0; i < 7; i++) {
    randomSeq[i] = round(random());
  }
  nb(randomSeq[0], randomSeq[1], randomSeq[2], randomSeq[3], randomSeq[4], randomSeq[5], randomSeq[6]);
  delay(500);
}