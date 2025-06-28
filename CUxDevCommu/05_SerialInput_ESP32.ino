/*
  Serial Input Example
*/

String inputString = "";

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    inputString = Serial.readStringUntil('\n');
    Serial.println("You typed: " + inputString);
  }
}
