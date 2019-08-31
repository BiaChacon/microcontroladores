int ledR = 11, ledY = 12, ledG = 13, ledRP = 9, ledGP = 10, botao = 8;
bool estadoBotao = false;

void setup() {
  
  pinMode(botao,INPUT_PULLUP);
  pinMode(ledR,OUTPUT);
  pinMode(ledY,OUTPUT);
  pinMode(ledG,OUTPUT);
  pinMode(ledRP,OUTPUT);
  pinMode(ledGP,OUTPUT);
  
}

void loop() {
  
  estadoBotao = digitalRead(botao);

  digitalWrite(ledG,HIGH);
  digitalWrite(ledRP,HIGH);

  digitalWrite(ledR,LOW);
  digitalWrite(ledY,LOW);
  digitalWrite(ledGP,LOW);

  if(estadoBotao == false){
   
    delay(3000);
    
    digitalWrite(ledG,LOW);
    digitalWrite(ledY,HIGH);  
    
    delay(2000);
    
    digitalWrite(ledRP,LOW);
    digitalWrite(ledY,LOW);
    digitalWrite(ledR,HIGH); 
    digitalWrite(ledGP,HIGH);
    
    delay(10000);
     
    for(int x=0;x<10;x++){
      digitalWrite(ledGP,HIGH);  
      delay(500);
      digitalWrite(ledGP,LOW);    
      delay(500);
     }
      
    }

}
