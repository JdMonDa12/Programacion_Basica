#include <iostream>

int main() {
	
	int myNumbers[] = {25, 50, 75, 100}; // valores de la cadena establecidos como enteros
	
	int length = sizeof(myNumbers) / sizeof(myNumbers[0]); // calcular la longitud de la cadena
	
	int i;

	for (i = 0; i < length; i++) { // usar la longitud de la cadena como medidor de la cantidad de valores establecidos dentro de la cadena
		
  		printf("%d\n", myNumbers[i]);
  	
}
	
	return 0;
	
}
