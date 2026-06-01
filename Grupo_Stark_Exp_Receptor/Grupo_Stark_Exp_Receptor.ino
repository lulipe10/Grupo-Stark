//LED


void setup() {
  pinMode(3,OUTPUT);
  pinMode(2,INPUT);
}

void loop() {
  if(digitalRead(3) == HIGH){
  digitalWrite(2,HIGH);
  }
  else{
    digitalWrite(2,LOW);
  }
}