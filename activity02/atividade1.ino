int ledR1 = 13, ledR2 = 10, ledY1 = 12, ledY2 = 9, ledG1 = 11, ledG2 = 8;
int pot = A1;
int tempo = 0;

void setup() {
  
  pinMode(ledR1,OUTPUT);
  pinMode(ledR2,OUTPUT);
  pinMode(ledY1,OUTPUT);
  pinMode(ledY2,OUTPUT);
  pinMode(ledG1,OUTPUT);
  pinMode(ledG2,OUTPUT);
  Serial.begin(9600);

}

void loop() {

  tempo = analogRead(pot);
  
  digitalWrite(ledR1,HIGH);
  digitalWrite(ledG2,HIGH);
  
  digitalWrite(ledG1,LOW);
  digitalWrite(ledY1,LOW);
  digitalWrite(ledR2,LOW);
  digitalWrite(ledY2,LOW);

  delay(tempo);

  digitalWrite(ledY1,HIGH);
  digitalWrite(ledY2,HIGH);
  
  digitalWrite(ledG1,LOW);
  digitalWrite(ledR1,LOW);
  digitalWrite(ledR2,LOW);
  digitalWrite(ledG2,LOW);

  delay(tempo);

  digitalWrite(ledG1,HIGH);
  digitalWrite(ledR2,HIGH);
  
  digitalWrite(ledR1,LOW);
  digitalWrite(ledY1,LOW);
  digitalWrite(ledG2,LOW);
  digitalWrite(ledY2,LOW);

  delay(tempo);
  
  digitalWrite(ledY1,HIGH);
  digitalWrite(ledY2,HIGH);
  
  digitalWrite(ledR1,LOW);
  digitalWrite(ledG1,LOW);
  digitalWrite(ledG2,LOW);
  digitalWrite(ledR2,LOW);

  delay(tempo);

  Serial.println(tempo);
    
}
