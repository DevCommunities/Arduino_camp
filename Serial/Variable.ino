int i =10; // เก็บจำนวนเต็ม
float f = 10.55; // เก็บจำนวนจริง(มีทศนิยม)
bool b = true; // เก็บค่าความจริง มีจริงกับเท็จ จริง:0 เท็จ:1
char c = 'A'; // เก็บค่าตัวหนังสือเดี่ยวๆ
String s = "Devcommu"; // เก็บค่าตัวหนังสือเดี่ยวๆ

void setup() {
    Serial.begin(9600);
    Serial.println("<Arduino is setup mode>");
}

void loop() {
    Serial.println("<Arduino is in loop mode>");
    Serial.println("ตัวอย่างการแสดงค่า int : " + String(i)); // ในที่นี้เราจะเปลี่ยนค่า int -> string เพราะstring เพราะstringมีคุณสมบัติการเชื่อมต่อกัน
    Serial.println("ตัวอย่างการแสดงค่า float : " + String(f)); // ในที่นี้เราจะเปลี่ยนค่า float -> string เพราะstring เพราะstringมีคุณสมบัติการเชื่อมต่อกัน
    Serial.println("ตัวอย่างการแสดงค่า boolean : " + String(b)); // ในที่นี้เราจะเปลี่ยนค่า bool -> string เพราะstring เพราะstringมีคุณสมบัติการเชื่อมต่อกัน
    Serial.println("ตัวอย่างการแสดงค่า char : " + String(c)); // ในที่นี้เราจะเปลี่ยนค่า bool -> string เพราะstring เพราะstringมีคุณสมบัติการเชื่อมต่อกัน
    Serial.println("ตัวอย่างการแสดงค่า string : " + s); 
    delay(10000);
}


