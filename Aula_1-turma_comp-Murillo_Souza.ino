int ldr = A0;
int led = 9;

void setup(){
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}
void loop(){
  int valor = analogRead(ldr);
  Serial.print("Leitura LDR: ");  //Texto descritivo
  Serial.println(valor);          //Valor com quebra de linha
  if(valor > 500){                //Escuro? Ajuste o valor conforme teste
    digitalWrite(led, LOW);
    delay(50);
  }
  else{
    digitalWrite(led, HIGH);
    delay(50);
  }
}