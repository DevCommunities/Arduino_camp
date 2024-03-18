void setup() {
  Serial.begin(9600);  // เริ่มต้นการใช้งาน Serial ที่อัตราสัญญาณ 9600 bps
  pinMode(LED_BUILTIN, OUTPUT);  // กำหนดขา LED_BUILTIN เป็นโหมดเอาต์พุต
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // เปิดไฟ LED
  Serial.println("ไฟเปิด");  // ส่งข้อความ "ไฟเปิด" ผ่าน Serial
  delay(100);  // หน่วงเวลา 100 มิลลิวินาที
  digitalWrite(LED_BUILTIN, LOW);  // ปิดไฟ LED
  Serial.println("ไฟปิด");  // ส่งข้อความ "ไฟปิด" ผ่าน Serial
  delay(100);  // หน่วงเวลา 100 มิลลิวินาที
}
