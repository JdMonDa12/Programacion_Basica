#include <stdio.h>
#include <stdlib.h>

int main() {
	
	
	int mat[4][4];
	int maxs[4];
	int i, j;
	int max;
	
	float prom = 0;
	
	
	printf("Ingrese los valores (4x4):\n");
	
	
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			printf("Valor [%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
			
		}
	}
	
	
	for (i = 0; i < 4; i++) {
		
		max = mat[i][0];
		
		for (j = 0; j < 4; j++) {
			
			if (mat[i][j] > max) {
				
				max = mat[i][j];
				
			}
			
		}
		
		maxs[i] = max;
	}
	
	
	for (i = 0; i < 4; i++) {
		
		prom += maxs[i];
		
	}
	
	
	prom = prom / 4;
	
	
	printf("\n");
	printf("\nMatriz:\n");
	
	
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			printf("%d ", mat[i][j]);
			
		}
		
		printf("| Maximo: %d\n", maxs[i]);
		
	}
	
	
	printf("\n");
	printf("\nPromedio de los maximos = %.2f\n", prom);
	
	
	return 0;
	
}
