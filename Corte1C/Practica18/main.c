#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int edades[] = {20, 22, 18, 35, 48, 26, 87, 70}; 	// un array de differentes edades
	
	int i;

	int length = sizeof(edades) / sizeof(edades[0]); // obtener la longitud del array
	
	int MenorEdad = edades[0]; // establecer variable nueva y asignarle el valor de el primer valor del array.

	for (i = 0; i < length; i++) { // Loop a traves de los elementos del array para hallar el menor valor
	
  		if (MenorEdad > edades[i]) {
  			
    		MenorEdad = edades[i];
    		
  		}
	}	
	
	return 0;
	
}
