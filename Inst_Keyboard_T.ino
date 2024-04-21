int notes[] = {262,294,330,349};

void setup(){
  Serial.begin(9600);
}

void loop(){
  int ValorSom = analogRead(A0); //Ler valor dependendo do botão
  Serial.println(ValorSom);
  
  if(ValorSom ==1023){
    tone(8, notes[0]);
  }
  else if(ValorSom >= 990 && ValorSom <=1010){
    tone(8, notes[1]);
  }
  else if(ValorSom <= 505 && ValorSom <= 515){
    tone(8, notes[2]);
  }
  else if(ValorSom >= 5 && ValorSom <=10){
    tone(8, notes[3]);
  }
  else{
    noTone(8);
  }
}
    