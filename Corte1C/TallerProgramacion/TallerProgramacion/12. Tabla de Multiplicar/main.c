#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int num;
	
	int resul;
	
	int count=0;
	
	printf("Ingrese el numero deseado: ");
	scanf("%d", &num);
	
	do {
		
		count++;
		
		resul=num*count;
		
		printf("%d\n", resul);
		
	} while (count<10);
		
	return 0;
}
