int trig = 9;
int echo = 10;
int led = 2;


void setup() {
  pinMode(trig,OUTPUT);
pinMode(led,OUTPUT);
pinMode(echo,INPUT);
}

void loop() {
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  long duracao = pulseIn(echo,HIGH);
  float distancia = duracao * 0.034 / 2;

  if (distancia <= 10 && distancia > 0){
    digitalWrite(led,HIGH);
    } else {
      digitalWrite(led,LOW);
    }
    
  
}
