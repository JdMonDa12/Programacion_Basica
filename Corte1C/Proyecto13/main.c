#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int myNumbers[] = {10, 25, 50, 75, 100}; // cada entero equivale a 4 bytes
	
	printf("%zu", sizeof(myNumbers)); // el resultado aca da 20, porque 4 (tamaño en bytes de cada entero) * 5 (cantidad de valores) = 20
	
	return 0;
}
