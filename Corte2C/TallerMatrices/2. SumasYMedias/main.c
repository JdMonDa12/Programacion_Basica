#include <stdio.h>
#include <stdlib.h>

int main() {
	
	
	int mat[4][4];
	int i, j;
	
	
	int sumpar = 0, sumimp = 0;
	int pospar = 0, posimp = 0;
	int countpar = 0, countimp = 0;
	int poscountpar = 0, poscountimp = 0;
	
	
	printf("Ingrese los valores (4x4):\n");
	
	
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			printf("Elemento [%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
			
			if (mat[i][j] % 2 == 0) {
				
				sumpar += mat[i][j];
				countpar++;
				
			} else {
				
				sumimp += mat[i][j];
				countimp++;
				
			}
			
			int pos = i * 4 + j;
			
			if (pos % 2 == 0) {
				
				pospar += mat[i][j];
				poscountpar++;
				
				
			} else {
				
				posimp += mat[i][j];
				poscountimp++;
				
			}	
		}
	}
	
	printf("\nLa matriz es:\n");


	
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			printf("%d\t", mat[i][j]);
		}
		
		printf("\n");
	}
	
	
	float prompar, promimp, prompospar, promposimp;
	
	
	if (countpar != 0) {
		
		prompar = (float) sumpar / countpar;
		
	} else {
		
		prompar = 0;
		
	}
	
	
	if (countimp != 0) {
		
		promimp = (float)sumimp / countimp;
		
	} else {
		
		promimp = 0;
		
	}
	
	
	if (poscountpar != 0) {
		
		prompospar = (float) pospar / poscountpar;
		
	} else {
		
		prompospar = 0;
		
	}
	
	
	if (poscountimp != 0) {
		
		promposimp = (float) posimp / poscountimp;
		
	} else {
		
		promposimp = 0;
		
	}
	
	
	printf("Resultados: \n");
	
	
    printf("Suma de numeros pares: %d\n", sumpar);
    printf("Media de numeros pares: %.2f\n", prompar);
    

    printf("Suma de numeros impares: %d\n", sumimp);
    printf("Media de numeros impares: %.2f\n", promimp);
    

    printf("Suma de numeros en posiciones pares: %d\n", pospar);
    printf("Media de numeros en posiciones pares: %.2f\n", prompospar);


    printf("Suma de numeros en posiciones impares: %d\n", posimp);
    printf("Media de numeros en posiciones impares: %.2f\n", promposimp);
	
	return 0;
}
