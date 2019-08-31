byte ledsG[] = {9,10,11};
int ledY = 8;
byte ledsR[] = {5,6,7};


void setup() {
  
  for(int i = 0; i <= 2;i++){
    pinMode(ledsG[i],OUTPUT);
    pinMode(ledsR[i],OUTPUT);
  }
  pinMode(ledY,OUTPUT);
 
}

void loop() {

  for(int i = 0; i <= 2;i++){
    digitalWrite(ledsG[i],LOW);
    digitalWrite(ledsR[i],HIGH);
  }
  digitalWrite(ledY,LOW);
  delay(10000);
  
  for(int i = 0; i <= 2;i++){
    digitalWrite(ledsR[i],LOW);
    if(i < 2){
      delay(1000);
    }
    
  }
  
  //fazer laço do verde
  for (int j = 0; j <= 10; j++){
     for (int i = 0; i <= 2; i++) {
     digitalWrite(ledsG[i], HIGH);
     delay(100);
     digitalWrite(ledsG[i], LOW);
     delay(100);
   }
  }
  
  for(int i = 0; i <= 2;i++){
    digitalWrite(ledsG[i],HIGH);
  }
  delay(1000);
  for(int i = 0; i <= 2;i++){
    digitalWrite(ledsG[i],LOW);
    if(i == 2){
    digitalWrite(ledY, HIGH);
    delay(1000);
    }
    delay(1000);
  }
  
  
}
