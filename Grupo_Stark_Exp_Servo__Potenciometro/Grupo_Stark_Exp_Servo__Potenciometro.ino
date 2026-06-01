int brilhoLed = 0;

void setup () { 
pinMode(3, OUTPUT);
pinMode(A0, INPUT);
}

void loop () {
  brilhoLed = map(analogRead(A0), 0 , 1023 , 0 , 255);

  analogWrite(3, brilhoLed);
  
  }
