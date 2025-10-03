const int ledPin = 13; // Definir el pin led

void setup() {
  pinMode(ledPin, OUTPUT); // definir el pin elegido como OUTPUT
}

void loop() {

  int blinkCount = 0; // iniciar un contador para el numero de parpadeos

  while (blinkCount < 5) { // Repetir mientras que el valor de blinkCount sea < 5

    digitalWrite(ledPin, HIGH); // encender
    delay(1000);                // esperar 1 segundo (1000ms=1s)
    digitalWrite(ledPin, LOW);  // apagar
    delay(1000);                // esperar 1 segundo (1000ms=1s)
    blinkCount++; // sumar 1 al contador de blinkCount
  }

  delay(2000); // pausa de 2 segundos antes de volver a repetir el loop
  
}
