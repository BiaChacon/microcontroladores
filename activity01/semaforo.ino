int ledR = 1, ledY = 2, ledG = 3;

void setup() {
  
  pinMode(ledR,OUTPUT);
  pinMode(ledY,OUTPUT);
  pinMode(ledG,OUTPUT);

}

void loop() {

   
    digitalWrite(ledR,HIGH);
    digitalWrite(ledY,LOW);  
    digitalWrite(ledG,LOW);
    delay(10000);
  
    digitalWrite(ledG,HIGH); 
    digitalWrite(ledR,LOW);
    digitalWrite(ledY,LOW);      
    delay(10000);

    digitalWrite(ledY,HIGH);
    digitalWrite(ledR,LOW);  
    digitalWrite(ledG,LOW); 
    delay(2000);

}
