int pinoLed = 3; // variável do pino do LED
int brilhoLed = 0; // variável que vai armazenar o valor do pino do LED
int pinoSensor = A0; // variável do pino do sensor
int sensorVal = 0; // variável que armazena o valor do sensor


void setup() {
pinMode(pinoSensor,INPUT);
pinMode(pinoLed,OUTPUT);

}

void loop() {
sensorVal = analogRead(pinoSensor); // lê o valor do sensor e armazena na variável sensorVal 
brilhoLed = map(sensorVal,0,1023,0,255); // transforma o valor analógico em PWM
analogWrite(pinoLed,brilhoLed); // manda o led acender com a intensidade do sensor
}
