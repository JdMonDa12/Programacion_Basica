const int ledPin = 13; // definir el pin LED

unsigned long previousMillis = 0; // guarda la ultima actualizacion del LED
const long interval = 1000;       // intervalo de parpadeo (en milisegundos, 1000ms = 1s)
bool ledState = LOW;              // Estado actual del LED

void setup() {
  pinMode(ledPin, OUTPUT); // inicializar el LED como OUTPUT (de salida)
}

void loop() {
  unsigned long currentMillis = millis(); // agarrar el tiempo actual

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis; // guardar el tiempo como actualizacion

    // para activar el estado del LED
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    // escribir el nuevo estado del pin
    digitalWrite(ledPin, ledState);
  }
}
