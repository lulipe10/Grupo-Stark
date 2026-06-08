//ULTRASSOM
int trig = 9;
int echo = 10;
int enviar = 2;
int receber = 3;

void setup() {
  pinMode(enviar,OUTPUT);
  pinMode(receber,INPUT);
  pinMode(trig,OUTPUT);
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

  if (distancia <= 20 && distancia > 0){
    digitalWrite(enviar,HIGH);
    } else {
      digitalWrite(enviar,LOW);
    }
    
  
}





 
