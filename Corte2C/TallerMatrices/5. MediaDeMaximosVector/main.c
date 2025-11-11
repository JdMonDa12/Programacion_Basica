#include <stdio.h>
#include <stdlib.h>

int main() {
	
	
	int mat[4][4];
	int maxs[4];
	int i, j;
	int max;
	
	
	printf("Ingrese los elementos(4x4):\n");
	
	
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
	
	
	printf("\n");
	printf("\nLa matriz es:\n");
	
	
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			printf("%d ", mat[i][j]);
			
		}
		
		printf("\n");
		
	}
	
	
	printf("\nVector de maximos:\n");
	
	
	for (i = 0; i < 4; i++) {
		
		printf("%d ", maxs[i]);
		
	}

	
	printf("\n");
	
	
	return 0;

}
