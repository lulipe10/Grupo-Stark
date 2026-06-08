//led
int receber = 3;
int voltar = 2;
int led = 4;

void setup() {
  pinMode(receber,INPUT);
  pinMode(voltar,OUTPUT);
	pinMode(led,OUTPUT);
}

void loop() {
  if(digitalRead(3) == HIGH){
  digitalWrite(4,HIGH);
  }
  else{
    digitalWrite(4,LOW);
  }
}