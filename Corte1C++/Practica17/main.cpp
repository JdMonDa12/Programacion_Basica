#include <iostream>

int main() {
	
	int edades[] = {20, 22, 18, 35, 48, 26, 87, 70}; 	// un array de differentes edades

	float avg, sum = 0; // establecer el promedio como decimal, dar a "sum" el valor de 0
	
	int i;

	int length = sizeof(edades) / sizeof(edades[0]); // obtener la longitud del array

	for (i = 0; i < length; i++) { // Loop a traves de los elementos del array
	
  		sum += edades[i]; // += en este caso significa que "sum = sum + edades"
  		
	}

	avg = sum / length; // Calcular el promedio dividiendo sum entre la longitud

	printf("La edad promedio es igual a: %.2f", avg);	
	
	return 0;
	
}
