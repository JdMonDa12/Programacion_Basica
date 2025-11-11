#include <stdio.h>
#include <stdlib.h>

int main() {
	
	
	float mat[4][4];
	float sumfil[4];
	float sumcol[4];
	
	int i, j;
	
	
	for (i = 0; i < 4; i++) {
		
		sumfil[i] = 0;
		sumcol[i] = 0;
		
	}
	
	
	printf("Ingrese los elementos (4x4):\n");
	
	
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			printf("Valor [%d][%d]: ", i, j);
			scanf("%f", &mat[i][j]);
			
		}
	}
	
	
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			sumfil[i] += mat[i][j];
			sumcol[i] += mat [i][j];
			
		}
	}
	
	
	printf("\nMatriz con sumas:\n");
	
	
	for (i = 0; i < 4; i++) {
		
		for ( j = 0; j < 4; j++) {
			
			printf("%6.2f", mat[i][j]);
			
		}
		
		printf(" = %.2f\n", sumfil[i]);
		
	}
	
	
	printf("\n");
	
	
	for (j = 0; j < 4; j++) {
		
		printf("%6.2f", sumcol[j]);
		
	}
	
	
	printf("\n");
	
	
	return 0;
	
}
