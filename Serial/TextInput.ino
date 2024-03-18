void setup() {
    Serial.begin(9600);  // เริ่มต้นการใช้งาน Serial ที่อัตราสัญญาณ 9600 bps
    Serial.println("Enter some text:");  // แสดงข้อความบน Serial Monitor เพื่อแจ้งให้ผู้ใช้รู้ว่าให้ป้อนข้อมูล
}

void loop() {
    if (Serial.available() > 0) {  // ตรวจสอบว่ามีข้อมูลที่ถูกส่งมาทาง Serial Monitor หรือไม่
        String input = Serial.readString();  // อ่านข้อมูลจาก Serial Monitor และเก็บไว้ในตัวแปร input
        Serial.print("You entered: ");  // พิมพ์ข้อความ "You entered: " ทาง Serial Monitor
        Serial.println(input);  // พิมพ์ข้อมูลที่ผู้ใช้ป้อนเข้ามา ทาง Serial Monitor
    }
}