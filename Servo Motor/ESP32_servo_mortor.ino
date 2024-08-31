#include <ESP32Servo.h>

int servoPin = 13;

// Create the servo object
Servo myservo;

// Setup section to run once
void setup() {
  myservo.attach(servoPin); // attach the servo to our servo object
  myservo.write(90); // stop the motor
}

// Loop to keep the motor turning!
void loop() {
  myservo.write(45); // rotate the motor counter-clockwise
  delay(500); 

  myservo.write(90);
  delay(500); 

  myservo.write(135); 
  delay(500); 
}
