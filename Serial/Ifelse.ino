// สร้างตัวแปรเก็บค่าที่รับมาจาก Serial
char incomingByte;

// กำหนดขาที่เชื่อมกับ LED
const int ledPin = 13;

void setup() {
  // เปิด Serial communication
  Serial.begin(9600);

  // กำหนดขาที่เชื่อมกับ LED เป็น OUTPUT
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // ตรวจสอบว่ามีข้อมูลที่รับมาใน Serial
  if (Serial.available() > 0) {
    // อ่านค่าจาก Serial
    incomingByte = Serial.read();
    // ตรวจสอบค่าที่รับมา
    if (incomingByte == '1') {
      // ถ้ารับค่า '1' ให้เปิด LED
      digitalWrite(ledPin, HIGH);
      Serial.println("LED ON"); // ส่งข้อความผ่าน Serial
    } else if (incomingByte == '0') {
      // ถ้ารับค่า '0' ให้ปิด LED
      digitalWrite(ledPin, LOW);
      Serial.println("LED OFF"); // ส่งข้อความผ่าน Serial
    } else {
      // ในกรณีที่ไม่ได้รับค่า '0' หรือ '1'
      Serial.println("Invalid input"); // ส่งข้อความผ่าน Serial
    }
  }
}
