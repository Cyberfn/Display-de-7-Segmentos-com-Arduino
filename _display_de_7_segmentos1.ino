// pinos onde cada um dos segmentos estão conectados:
const int pino_a = 7; 
const int pino_b = 6; 
const int pino_c = 10; 
const int pino_d = 11; 
const int pino_e = 12; 
const int pino_f = 8; 
const int pino_g = 9; 

void setup() {
  // configura os pinos de cada segmento como saída:
  pinMode(pino_a, OUTPUT);
  pinMode(pino_b, OUTPUT);
  pinMode(pino_c, OUTPUT);
  pinMode(pino_d, OUTPUT);
  pinMode(pino_e, OUTPUT);
  pinMode(pino_f, OUTPUT);
  pinMode(pino_g, OUTPUT);
}

void loop() {
  // acende os segmentos necessários para formar o número 0 (zero):
  digitalWrite(pino_a, HIGH);
  digitalWrite(pino_b, HIGH);
  digitalWrite(pino_c, HIGH);
  digitalWrite(pino_d, HIGH);
  digitalWrite(pino_e, HIGH);
  digitalWrite(pino_f, HIGH);
  digitalWrite(pino_g, LOW);
  delay(1000); // aguarda 1 segundo
  
  // acende os segmentos necessários para formar o número 1 (um):
  digitalWrite(pino_a, LOW);
  digitalWrite(pino_b, HIGH);
  digitalWrite(pino_c, HIGH);
  digitalWrite(pino_d, LOW);
  digitalWrite(pino_e, LOW);
  digitalWrite(pino_f, LOW);
  digitalWrite(pino_g, LOW);
  delay(1000); // aguarda 1 segundo

  // acende os segmentos necessários para formar o número 2 (dois):
  digitalWrite(pino_a, HIGH);
  digitalWrite(pino_b, HIGH);
  digitalWrite(pino_c, LOW);
  digitalWrite(pino_d, HIGH);
  digitalWrite(pino_e, HIGH);
  digitalWrite(pino_f, LOW);
  digitalWrite(pino_g, HIGH);
  delay(1000); // aguarda 1 segundo

  // acende os segmentos necessários para formar o número 3 (três):
  digitalWrite(pino_a, HIGH);
  digitalWrite(pino_b, HIGH);
  digitalWrite(pino_c, HIGH);
  digitalWrite(pino_d, HIGH);
  digitalWrite(pino_e, LOW);
  digitalWrite(pino_f, LOW);
  digitalWrite(pino_g, HIGH);
  delay(1000); // aguarda 1 segundo

  // acende os segmentos necessários para formar o número 4 (quatro):
  digitalWrite(pino_a, LOW);
  digitalWrite(pino_b, HIGH);
  digitalWrite(pino_c, HIGH);
  digitalWrite(pino_d, LOW);
  digitalWrite(pino_e, LOW);
  digitalWrite(pino_f, HIGH);
  digitalWrite(pino_g, HIGH);
  delay(1000); // aguarda 1 segundo

  // acende os segmentos necessários para formar o número 5 (cinco):
  digitalWrite(pino_a, HIGH);
  digitalWrite(pino_b, LOW);
  digitalWrite(pino_c, HIGH);
  digitalWrite(pino_d, HIGH);
  digitalWrite(pino_e, LOW);
  digitalWrite(pino_f, HIGH);
  digitalWrite(pino_g, HIGH);
  delay(1000); // aguarda 1 segundo

  // acende os segmentos necessários para formar o número 6 (seis):
  digitalWrite(pino_a, LOW);
  digitalWrite(pino_b, LOW);
  digitalWrite(pino_c, HIGH);
  digitalWrite(pino_d, HIGH);
  digitalWrite(pino_e, HIGH);
  digitalWrite(pino_f, HIGH);
  digitalWrite(pino_g, HIGH);
  delay(1000); // aguarda 1 segundo

  // acende os segmentos necessários para formar o número 7 (sete):
  digitalWrite(pino_a, HIGH);
  digitalWrite(pino_b, HIGH);
  digitalWrite(pino_c, HIGH);
  digitalWrite(pino_d, LOW);
  digitalWrite(pino_e, LOW);
  digitalWrite(pino_f, LOW);
  digitalWrite(pino_g, LOW);
  delay(1000); // aguarda 1 segundo

  // acende os segmentos necessários para formar o número 8 (oito):
  digitalWrite(pino_a, HIGH);
  digitalWrite(pino_b, HIGH);
  digitalWrite(pino_c, HIGH);
  digitalWrite(pino_d, HIGH);
  digitalWrite(pino_e, HIGH);
  digitalWrite(pino_f, HIGH);
  digitalWrite(pino_g, HIGH);
  delay(1000); // aguarda 1 segundo

  // acende os segmentos necessários para formar o número 9 (nove):
  digitalWrite(pino_a, HIGH);
  digitalWrite(pino_b, HIGH);
  digitalWrite(pino_c, HIGH);
  digitalWrite(pino_d, LOW);
  digitalWrite(pino_e, LOW);
  digitalWrite(pino_f, HIGH);
  digitalWrite(pino_g, HIGH);
  delay(1000); // aguarda 1 segundo
}