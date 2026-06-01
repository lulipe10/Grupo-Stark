int botao = 3;
int buzzer = 2;


void setup() {
pinMode(2,OUTPUT);
pinMode(3,INPUT);
pinMode(4,INPUT);
pinMode(5,OUTPUT);
}
void loop() {
if(digitalRead(3) == HIGH){
  digitalWrite(buzzer,HIGH);
  }else{
  digitalWrite(buzzer,LOW);
}
}
