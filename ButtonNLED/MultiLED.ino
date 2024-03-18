// กำหนดขาที่เชื่อมกับ LED
const int ledPin1 = 2;
const int ledPin2 = 4;
const int ledPin3 = 7;

// กำหนดขาที่เชื่อมกับปุ่ม
const int buttonPin = 5;

// ตัวแปรเก็บสถานะปุ่มก่อนหน้า
int previousButtonState = LOW;
// ตัวแปรเก็บจำนวนครั้งที่กดปุ่ม
int buttonPressCount = 0;

void setup() {
  // กำหนดขาที่เชื่อมกับ LED เป็น OUTPUT
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);

  // กำหนดขาที่เชื่อมกับปุ่มเป็น INPUT
  pinMode(buttonPin, INPUT);
}

void loop() {
  // อ่านสถานะปัจจุบันของปุ่ม
  int buttonState = digitalRead(buttonPin);

  // ตรวจสอบว่าปุ่มถูกกด
  if (buttonState == HIGH && previousButtonState == LOW) {
    buttonPressCount++; // เพิ่มจำนวนครั้งที่กดปุ่ม
    delay(50); // รอเพื่อป้องกันการกดซ้ำโดยไม่ต้องการ

    // ตรวจสอบจำนวนครั้งที่กดปุ่มและปล่อยไฟที่พินที่เกี่ยวข้อง
    int remainder = buttonPressCount % 3;
    if (remainder == 1) {
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, LOW);
    } else if (remainder == 2) {
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, LOW);
    } else if (remainder == 0) {
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, HIGH);
    }
  }

  // อัปเดตสถานะปุ่มก่อนหน้า
  previousButtonState = buttonState;
}
