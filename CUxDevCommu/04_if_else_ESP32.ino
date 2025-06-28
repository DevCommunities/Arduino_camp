/*
  if / else example
*/

void setup() {
  Serial.begin(9600);
}

void loop() {
  int a = 30;
  int b = 20;

  if (a > b) {
    Serial.println(a);
  } else {
    Serial.println(b);
  }

  delay(1000);
}
