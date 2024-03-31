// set pin numbers
const int buttonPin = 4;
const int ledPin1 = 5;
const int ledPin2 = 23;
int buttonState = 0;

void setup() {
  Serial.begin(9600);
  
  pinMode(buttonPin, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT); 
}
void loop() {
  buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);
  if (buttonState == HIGH) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW); }
  else {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH); 
  } 
}