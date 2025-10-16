#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int N;
	int M;
	int count=0;
	
	printf("Ingrese el primer numero: ");
	scanf("%d", &N);
	
	printf("Ingrese el segundo numero (debe de ser menor que el primero): ");
	scanf("%d", &M);
	
	if (N < M) {
		
        printf("Error: El primer número debe ser mayor que el segundo.\n");
        
        return 1;
        
    } 

	int i;
	
    for (i = M + 1; i < N && count < 3; i++) { // formula para hallar si hay los 3 numeros pares entre N y M
    	
        if (i % 2 == 0) { // se asegura que el numero posible es divisible entre 2
        
        	printf("Numero par entre %d y %d:\n", M, N);
        	
            printf("%d\n", i); // se imprime
            
            count++; // se aumenta el contador para seguir con el siguiente numero
            
        }
        
    }
    
    if (count < 3) { // si el loop anterior no llego a 3, significa que no hay 3 numeros pares entre N y M
    	
        printf("No hay tres numeros pares entre los valores ingresados.\n");
        
    }

	return 0;
}
