const int BUTTON_PIN = 2;  // กำหนดขาของโมดูลปุ่ม
const int LED_PIN = 2;  // กำหนดขา LED ให้เป็นขา LED_BUILTIN

void setup() {
  pinMode(BUTTON_PIN, INPUT);  // กำหนดขาของโมดูลปุ่มเป็นโหมดอินพุต
  pinMode(LED_PIN, OUTPUT);  // กำหนดขา LED_PIN เป็นโหมดเอาต์พุต
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN);  // อ่านสถานะปุ่ม
  if (buttonState == HIGH) {  // ถ้าปุ่มถูกกด
    digitalWrite(LED_PIN, HIGH);  // เปิดไฟ LED
  } else {  // ถ้าปุ่มไม่ถูกกด
    digitalWrite(LED_PIN, LOW);  // ปิดไฟ LED
  }
}
