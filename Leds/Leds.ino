void setup() {
 
  //portas onde estão os leds
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  
  //recebe dados do bluetooth
  Serial.begin(9600);
}

void loop(){
  
  
  //variavel que recebe o valor recebido por bluetooth
  char a = Serial.read();

  //ligar leds
  if (a == 'a') digitalWrite(5,HIGH);//sala
  if (a == 'b') digitalWrite(6,HIGH);//cozinha
  if (a == 'c') digitalWrite(7,HIGH);//quarto
  if (a == 'd') digitalWrite(8,HIGH);//corredor
  if (a == 'e') digitalWrite(9,HIGH);//banheiro
  if (a == 'f') digitalWrite(10,HIGH);//area externa
  
  
  //desligar leds
  if (a == 'A') digitalWrite(5,LOW);//sala
  if (a == 'B') digitalWrite(6,LOW);//cozinha
  if (a == 'C') digitalWrite(7,LOW);//quarto
  if (a == 'D') digitalWrite(8,LOW);//corredor
  if (a == 'E') digitalWrite(9,LOW);//banheiro
  if (a == 'F') digitalWrite(10,LOW);//area externa


  //tempo de delay entre cada ação
  delay(50);
}

