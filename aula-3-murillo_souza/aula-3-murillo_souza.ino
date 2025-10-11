// Definição dos pinos
int ENA = 6;  // Pino de velocidade (PWM)
int IN1 = 5;  // Pino de controle 1 da Ponte H
int IN2 = 4;  // Pino de econtrole 2 da Ponte h

int ENB = 3;
int IN3 = 1;
int IN4 = 2;

void setup() {
  // Configura os pinos como saída
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);

  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);

  // Inicialmente desligado
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(ENA, 0);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  digitalWrite(ENB, 0);
}

void loop() {
  frente_a(150);
  frente_b(150);
  delay(3000);

  parar();
  delay(2000);

  tras_b(50);
  frente_a(50);
  delay(1000);

  parar();
  delay(2000);

  frente_a(150);
  frente_b(150);
  delay(3000);

  parar();
  delay(2000);

  tras_b(50);
  frente_a(50);
  delay(1000);

  parar();
  delay(5000);
}

// Sub-rotina pra mover pra frente
void frente_a(int velocidade) {
   digitalWrite(IN1, HIGH);
   digitalWrite(IN2, LOW);
   analogWrite(ENA, velocidade);
}

// Sub-rotina pra mover pra trás
void tras_a(int velocidade) {
   digitalWrite(IN1, LOW);
   digitalWrite(IN2, HIGH);
   analogWrite(ENA, velocidade);
}

// Sub-rotina pra parar o motor
void parar_a() {
   digitalWrite(IN1, LOW);
   digitalWrite(IN2, LOW);
   analogWrite(ENA, 0);
}

// ---------------------------------------------------------------------------------------------------

void frente_b(int velocidade) {
   digitalWrite(IN3, LOW);
   digitalWrite(IN4, HIGH);
   analogWrite(ENB, velocidade);
}

// Sub-rotina pra mover pra trás
void tras_b(int velocidade) {
   digitalWrite(IN3, HIGH);
   digitalWrite(IN4, LOW);
   analogWrite(ENB, velocidade);
}

// Sub-rotina pra parar o motor
void parar_b() {
   digitalWrite(IN3, LOW);
   digitalWrite(IN4, LOW);
   analogWrite(ENB, 0);
}


void parar(){
  parar_a();
  parar_b();
}

