// กำหนดขาที่เชื่อมกับ LED
const int ledPin = 13;
// กำหนดขาที่เชื่อมกับปุ่ม
const int buttonPin = 2;

void setup() {
  Serial.begin(9600);
  // กำหนดขาที่เชื่อมกับ LED เป็น OUTPUT
  pinMode(ledPin, OUTPUT);
  // กำหนดขาที่เชื่อมกับปุ่มเป็น INPUT
  pinMode(buttonPin, INPUT);
}

void loop() {
  // ตรวจสอบสถานะของปุ่ม
  int buttonState = digitalRead(buttonPin);

  // ถ้าปุ่มถูกกด
  if (buttonState != HIGH) {
    // เปิด LED
    digitalWrite(ledPin, HIGH);
    // ส่งข้อความผ่าน Serial
    Serial.println("LED ON");
  } else {
    // ปิด LED
    digitalWrite(ledPin, LOW);
    // ส่งข้อความผ่าน Serial
    Serial.println("LED OFF");
  }
}
