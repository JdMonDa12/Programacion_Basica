const int ledPin = LED_BUILTIN;

void setup() {
  // inicializar pin principal
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // hacerlo parpadear X veces (i < x)
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin, HIGH); // encender
    delay(500);                 // esperar medio segundo (500ms=0.5s)
    digitalWrite(ledPin, LOW);  // apagar
    delay(500);                 // esperar medio segundo (500ms=0.5s)
  }

  // quedara apagado una vez finalizado el loop for

  delay(2000); // esperar 2 segundos antes de reiniciar el loop
}
