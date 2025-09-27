int IN1 = 4;
int IN2 = 5;
int ENA = 3;

// ENA = pino de velocidade
// IN1 = pino de controle 1
// IN2 = pino de controle 2

void setup() {
  //saida dos pinos
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);

  //config do inicio: DESLIGADO
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 0);

  //Se IN1 e IN2 forem [=], não anda
}

void loop() {
  frente(200);
  delay(2000);
  para();
  delay(500);
  tras(200);
  delay(2000);
  para();
  delay(500);
}

void frente(int velocidade) {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, velocidade);
}

void tras(int velocidade) {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  analogWrite(ENA, velocidade);
}

void para() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 0);
}