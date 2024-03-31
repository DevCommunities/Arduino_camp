void setup() {
    Serial.begin(9600);  // เริ่มต้นการใช้งาน Serial ที่อัตราสัญญาณ 9600 bps
    Serial.println("<Arduino อยู่ในโหมดเซ็ตอัพ>");  // พิมพ์ข้อความ "<Arduino อยู่ในโหมดเซ็ตอัพ>" ผ่าน Serial
}

void loop() {
    Serial.println("<Arduino อยู่ในโหมดลูป>");  // พิมพ์ข้อความ "<Arduino อยู่ในโหมดลูป>" ผ่าน Serial
    Serial.print("i ");  // พิมพ์ "i " โดยไม่ขึ้นบรรทัดใหม่
    Serial.print(" love ");  // พิมพ์ " love " โดยไม่ขึ้นบรรทัดใหม่
    Serial.print(" you ");  // พิมพ์ " you " โดยไม่ขึ้นบรรทัดใหม่
    Serial.print("\n\n haha \n\n");  // พิมพ์สองบรรทัดว่าง และ " haha " ในบรรทัดถัดไป และสองบรรทัดว่างต่อท้าย
    delay(1000);  // หน่วงเวลา 1000 มิลลิวินาที
}



