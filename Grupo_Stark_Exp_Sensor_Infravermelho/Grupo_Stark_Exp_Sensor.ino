int verde = 2
int vermelho = 4

void setup() {
  pinMode(verde,OUTPUT);
  pinMode(3,INPUT);
  pinMode(vermelho,OUTPUT);
}

void loop() {
  if(digitalRead(3) == HIGH){
    digitalWrite(2,LOW);
  }
  else{
    digitalWrite(2,HIGH);
  }
  if(digitalRead(3) == HIGH){
    digitalWrite(vermelho,HIGH);
  }
  else{
    digitalWrite(vermelho,LOW);
  }
}
