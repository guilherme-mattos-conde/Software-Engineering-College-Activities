int led_verde = 4;
int led_amarelo = 2;
int led_vermelho = 15;

void setup() {
  pinMode(led_verde, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_vermelho, OUTPUT);
  
  digitalWrite(led_verde, LOW);
  digitalWrite(led_amarelo, LOW);
  digitalWrite(led_vermelho, LOW);
}

void loop() {
  digitalWrite(led_verde, HIGH);
  delay(2000);
  digitalWrite(led_verde, LOW);
  digitalWrite(led_amarelo, HIGH);
  delay(1000);
  digitalWrite(led_amarelo, LOW);
  digitalWrite(led_vermelho, HIGH);
  delay(2000);
  digitalWrite(led_vermelho, LOW);
}
