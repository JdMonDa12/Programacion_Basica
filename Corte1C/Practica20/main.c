#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int Arr1[] = {10, 25, 50, 75, 100}; // se declara el Array
	
	int Lon1 = sizeof(Arr1) / sizeof(Arr1[0]); // formula para hallar la cantidad de numeros en el Array
	
	int Arr2[] = {10, 25, 50, 75, 100}; 
	
	int Lon2 = sizeof(Arr2) / sizeof(Arr2[0]);
	
	
	
	if (Lon1 != Lon2) { // esto es para ver si las matrices son diferentes en LONGITUD
		
		printf("LAS MATRICES NO SON IGUALES");
		
		return 0;
   	
   }
   	
   	
   	int equi=1; // esto es para establecer un tipo de variable booleana sin necesidad de la biblioteca de bool (igual=1, no igual=0)
   	
	
	int i;
	
	for (i = 0; i < Lon1; i++) { // y esto es para ver si LOS ELEMENTOS DE LA MATRIZ difieren el uno con el otro
	// se declara i como cero, y se establece el loop hasta que llegue a el valor de la longitud 1 
	// (que en esta parte del codigo, es la misma que la de la longitud 2)
		
		
		if (Arr1[i] != Arr2[i]) {
			
			equi = 0; // si hay un elemento diferente, marca como no igual (0)
			
			break;       // rompe el bucle una vez se encuentra un elemento diferente
		}
	}
			
	if(equi==1){
		
		printf("LAS MATRICES SON IGUALES");
		
	} else {
		
		printf("LAS MATRICES NO SON IGUALES");
		
	}	

	return 0;
}
