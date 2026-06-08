//Placa central


void setup() {
  pinMode(3,INPUT);
  pinMode(2,OUTPUT);
    pinMode(4,INPUT);
  pinMode(5,OUTPUT);
}

void loop() {
  if(digitalRead(3) == HIGH){
  digitalWrite(2,HIGH);
  }
  else{
    digitalWrite(2,LOW);
  }
  if(digitalRead(4) == HIGH){
  digitalWrite(5,HIGH);
  }else{
    digitalWrite(5,LOW);
  }
}
