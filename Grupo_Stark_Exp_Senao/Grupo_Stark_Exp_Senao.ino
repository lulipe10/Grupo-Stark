int vermelho = 2;
int verde = 3;
int amarelo = 4;
int tempo = 1000;
int contador = 0;

int a = 1;

void setup() {
Serial.begin(9600);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);

}

void loop() {
  if(contador < 25){
digitalWrite(amarelo,HIGH);
  delay(tempo);
  digitalWrite(amarelo,LOW);
  delay(tempo);
  tempo = tempo - 50;
contador++;
  }

if(a%2 == 0){
  digitalWrite(vermelho,HIGH);
  digitalWrite(verde,LOW);
}else{
  digitalWrite(vermelho,LOW);
  digitalWrite(verde,HIGH);
}
a++;
}
