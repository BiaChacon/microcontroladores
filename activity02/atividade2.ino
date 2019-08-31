int ledR = 11, ledY= 9, ledG = 8;
volatile boolean rapido = false;

void setup() {
  
  pinMode(ledR, OUTPUT);
  pinMode(ledY, OUTPUT);
  pinMode(ledG, OUTPUT);
  attachInterrupt(0,algoAconteceu,FALLING);
  
}

void loop() {

  digitalWrite(ledY,HIGH);
  digitalWrite(ledR,LOW);
  delay(1000);
  digitalWrite(ledY,LOW);
  digitalWrite(ledR,HIGH);
  delay(1000);

}

void algoAconteceu(){
  rapido = !rapido;
  digitalWrite(ledG,rapido);  
}
