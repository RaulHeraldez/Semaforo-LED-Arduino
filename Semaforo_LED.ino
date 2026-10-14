
const int ledRojo = 13;
const int ledAmarillo = 12;
const int ledVerde = 11;

void setup() {
  pinMode(ledRojo, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {
  // LED Verde 5 seg
  digitalWrite(ledVerde, HIGH);
  delay(5000);
  digitalWrite(ledVerde, LOW);

  // LED Amarilla 2 seg
  digitalWrite(ledAmarillo, HIGH);
  delay(2000);
  digitalWrite(ledAmarillo, LOW);

  // LED Roja 5 seg
  digitalWrite(ledRojo, HIGH);
  delay(5000);
  digitalWrite(ledRojo, LOW);
}
