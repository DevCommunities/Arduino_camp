int Relay1 = 13;
void setup()
{
    pinMode(Relay1, OUTPUT);
    digitalWrite(Relay1, HIGH);
}
void loop()
{
    digitalWrite(Relay1, LOW); // ส่งให้ไฟติด
    delay(1000);
    digitalWrite(Relay1, HIGH); // ส่งให้ไฟดับ
    delay(1000);
}