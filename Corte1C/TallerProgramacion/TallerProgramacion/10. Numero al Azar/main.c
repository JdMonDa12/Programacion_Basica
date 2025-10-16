#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	
	srand(time(0));
	
	
	int guess;

  	int min = 1;
  	
  	int count = 0;
  	
  	int max = 10;
  	
  	int NumAle = (rand() % (max - min + 1)) + min; // generador del numero aleatorio
  	
  	
  	do {
  		
        printf("Ingrese un numero entre 1 y 10: "); // pedir el numero
        scanf("%d", &guess);
        count++; // aca se guardan los intentos
        
        
        if (guess != NumAle)
        
            printf("Incorrecto, intenta de nuevo.\n"); // si el numero es erroneo
        
    } while (guess != NumAle);
    
    printf("El numero %d es el correcto. Intentos: %d." , NumAle, count); // si el numero es correcto
    
    return 0;
	
}
