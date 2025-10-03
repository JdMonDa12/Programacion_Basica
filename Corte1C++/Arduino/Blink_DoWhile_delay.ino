const int ledPin = 13; // Definir el pin led

void setup() {
  pinMode(ledPin, OUTPUT); // definir el pin elegido como OUTPUT
}

void loop() {

  int blinkCount = 0; // iniciar un contador para el numero de parpadeos

  do { 

    digitalWrite(ledPin, HIGH); // encender
    delay(100);                // esperar 1 segundo (1000ms=1s)
    digitalWrite(ledPin, LOW);  // apagar
    delay(100);                // esperar 1 segundo (1000ms=1s)
    blinkCount++; // sumar 1 al contador de blinkCount

  } while (blinkCount < 5); // Repetir mientras que el valor de blinkCount sea < 5


  delay(2000); // pausa de 2 segundos antes de volver a repetir el loop
  
}
