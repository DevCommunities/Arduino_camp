/*
  L298N Motor Driver Example
*/

int enA = 5;
int in1 = 18;
int in2 = 19;

void setup() {
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
}

void loop() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, 200); // speed

  delay(2000);

  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);

  delay(2000);
}
