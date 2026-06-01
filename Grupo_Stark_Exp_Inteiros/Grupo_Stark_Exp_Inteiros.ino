int a = 4;
int b = 5;

void setup() {
Serial.begin(9600);
}

void loop() {
Serial.print("--------------------------------------------");
Serial.println(a+b);
delay(1000);
Serial.println(a-b);
delay(1000);
Serial.println(a*b);
delay(1000);
Serial.println(a/b);
delay(1000);
}
