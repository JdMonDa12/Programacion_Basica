#include <stdio.h>
#include <stdlib.h>

int main() {
	
	
	int mat[4][4];
	int i, j;
	
	
	int max, min;
	int suma = 0;
	float prom;
	
	
	printf("Ingresa los valores (4x4):\n");
	
	
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			printf("Valor [%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	
	max = mat[0][0];
	min = mat[0][0];
	
	
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			int val = mat[i][j];
			
			suma += val;
			
			if (val > max) {
				
				max = val;
				
			}
			
			if (val < min) {
				
				min = val;
			}
		}
	}
	
	
	prom = (float) suma / 16;
	
	
	printf("\n");
	printf("La matriz es:\n");
	
	
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			printf("%d\t", mat[i][j]);
			
		}
		
		printf("\n");
		
	}
	
	
	printf("\n");
	
	printf("Valor maximo: %d\n", max);
	
	printf("Valor minimo: %d\n", min);
	
	printf("Suma total: %d\n", suma);
	
	printf("Promedio de todos los elementos: %.2f\n", prom);
	
	printf("\n");
	
	
	return 0;
	
}
