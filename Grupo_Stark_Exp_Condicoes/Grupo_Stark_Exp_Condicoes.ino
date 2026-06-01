int led = 2;
int buzzer = 3;
int contador = 0;


void setup() {
pinMode(led,OUTPUT);
pinMode(buzzer,OUTPUT);
}

void loop() {
while(contador < 10){
if(contador == 2){
digitalWrite(led, HIGH);
delay(200);
digitalWrite(led,LOW);
}
if(contador == 4){
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
}
if(contador == 6){
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
}
if(contador == 8){
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
}
if(contador == 10){
digitalWrite(buzzer,HIGH);
}
delay(500);
contador++;




}

}
