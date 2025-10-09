#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int myNumbers[] = {3, -1, 7, 0, 9}; // ESTABLECER ARRAY INCLUYENDO UN NEGATIVO Y UN CERO
	
	int length = sizeof(myNumbers) / sizeof(myNumbers[0]); // CALCULAR LONGITUD
	
	int i; // DECLARAR I COMO ENTERO
	

	for (i = 0; i < length; i++) {
		
  		if (myNumbers[i] < 0) {
  			
    		continue; // SALTARSE LOS NUMEROS NEGATIVOS EN EL ARRAY
    		
  		}
  		
  		if (myNumbers[i] == 0) {
  			
    		break; // ROMPER EL LOOP UNA VEZ SE DETECTA UN NUMERO CERO, NO DETECTAR MAS NUMEROS MAS ALLA DEL CERO
    		
  		}
  		
  		printf("%d\n", myNumbers[i]); // IMPRIMIR LOS VALORES DEL ARRAY CON LAS CONDICIONES ESTABLECIDAS
  		
	}
	
	return 0;
	
}
