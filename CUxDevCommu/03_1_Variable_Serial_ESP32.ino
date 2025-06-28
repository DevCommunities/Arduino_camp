int i = 10;
float f = 10.55;
bool b = true;
char c = 'A';
String s = "Devcommu";

void setup() {
  Serial.begin(9600);
  Serial.println("<Arduino is setup mode>");
}

void loop() {
  Serial.println("<Arduino is in loop mode>");
  Serial.println("ตัวอย่างการแสดงค่า int : " + String(i));
  Serial.println("ตัวอย่างการแสดงค่า float : " + String(f));
  Serial.println("ตัวอย่างการแสดงค่า boolean : " + String(b));
  Serial.println("ตัวอย่างการแสดงค่า char : " + String(c));
  Serial.println("ตัวอย่างการแสดงค่า string : " + s);
  delay(10000);
}
