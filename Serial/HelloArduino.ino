void setup() {
    Serial.begin(9600);  // เริ่มต้นการใช้งาน Serial ที่อัตราสัญญาณ 9600 bps
    Serial.println("<Arduino อยู่ในโหมดเซ็ตอัพ>");  // พิมพ์ข้อความ "<Arduino อยู่ในโหมดเซ็ตอัพ>" ผ่าน Serial
}

void loop() {
    Serial.println("<Arduino อยู่ในโหมดลูป>");  // พิมพ์ข้อความ "<Arduino อยู่ในโหมดลูป>" ผ่าน Serial
    delay(1000);  // หน่วงเวลา 1000 มิลลิวินาที
}
