#include <stdio.h>
#include <stdlib.h>

int main() {
	
	
	int mat[4][4];
	int i, j;
	int count = 0;
	
	
	printf("Ingrese los valores (4x4):\n");
	
	
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			printf("Valor [%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
			
			if (mat[i][j] % 2 == 0) {
				
				count++;
				
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
	
	
	printf("Pares en la matriz: %d\n", count);
	
	
	return 0;
	
}
