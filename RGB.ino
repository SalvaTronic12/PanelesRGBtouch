int G=10;
int B=9;
int R=11;

int dato;
int contador = 0;
void setup() {
  // put your setup code here, to run once:
  for(int i = 9;i<12;i++){
    pinMode(i,OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
dato = digitalRead(7);
delay(200);

if(dato == 1){
  contador++;

  
  if(contador == 0){
    apagado();
  }
  if(contador == 1){
    red();
  }
  else if(contador == 2){
    green();
  }
  if(contador == 3){
    blue();
  }
   if(contador ==4){
    cyan();
  }
   if(contador == 5){
    yellow();
  }
   if(contador == 6){
    magenta();
  }
 if(contador == 7){
    white();
  }
  if(contador==8){
    contador = 0;
    apagado();
  }
}

 Serial.println(contador); 
}


void apagado(){
digitalWrite(R,LOW);
digitalWrite(G,LOW);
digitalWrite(B,LOW);
}
void red(){
digitalWrite(R,HIGH);
digitalWrite(G,LOW);
digitalWrite(B,LOW);
}
void green(){
digitalWrite(R,LOW);
digitalWrite(G,HIGH);
digitalWrite(B,LOW);  
}
void blue(){
digitalWrite(R,LOW);
digitalWrite(G,LOW);
digitalWrite(B,HIGH);
}
void cyan(){
digitalWrite(R,LOW);
digitalWrite(G,HIGH);
digitalWrite(B,HIGH);
  
}
void yellow(){
digitalWrite(R,HIGH);
digitalWrite(G,HIGH);
digitalWrite(B,LOW);
}
void magenta(){
 digitalWrite(R,HIGH);
digitalWrite(G,LOW);
digitalWrite(B,HIGH);
}
void white(){
  digitalWrite(R,HIGH);
digitalWrite(G,HIGH);
digitalWrite(B,HIGH);
}
