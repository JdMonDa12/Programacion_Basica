#include <stdio.h>
#include <stdlib.h> // para rand() y srand()
#include <time.h>   // para time()

int main() {
	
	
    float bet, priz;
    
    int chance;


    // Inicializa la semilla aleatoria con la hora actual
    srand(time(NULL));
    

    printf("Ingrese la cantidad que desea apostar: ");
    scanf("%f", &bet);


    // Simula el lanzamiento de la moneda: 0 = cruz, 1 = cara
    chance = rand() % 2;

    if (chance == 1) {
    	
        priz = bet*2;
        
        printf("Salio cara, ganaste el doble: %.0f\n", priz);
        
    } else {
        
        printf("Salio cruz, perdiste todo.\n");
        
    }


    return 0;
}
