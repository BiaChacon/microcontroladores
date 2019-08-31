byte leds[] = {7,8,9,10,11};
int pot = A1;
int tempo = 0;
volatile boolean rapido = false;

void setup() {
  
  for(int i = 0; i <= 2;i++){
    pinMode(leds[i],OUTPUT);
  }
  
  attachInterrupt(0,algoAconteceu,FALLING);
}

void loop() {

  tempo = analogRead(pot);
  
   for(int i = 0; i <= 4;i++){
    digitalWrite(leds[i],LOW);
  }

   for(int i=0; i<=4;i++){
    digitalWrite(leds[0],HIGH);
    delay(tempo);
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[4-i],HIGH);
    delay(tempo);
    if(i<4){
      digitalWrite(leds[4-i],LOW);
    }
   }

  

}

void algoAconteceu(){
  
  rapido = !rapido; 
  tempo = analogRead(pot);
  
  /*for(int i=0; i<=4;i++){
      digitalWrite(leds[0],HIGH);
      delay(tempo);
      digitalWrite(leds[0],LOW);
      digitalWrite(leds[4-i],HIGH);
      delay(tempo);
      if(i<4){
        digitalWrite(leds[4-i],LOW);
      }
  }**/
  
}
