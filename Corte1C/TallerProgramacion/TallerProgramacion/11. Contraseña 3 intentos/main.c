#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int count=0; // contador de intentos
	
	char attempt[1][100]; //variable del intento que se va a colocar
	
	char contra[1][100];
	strcpy(contra[0], "AquiVaLaPassword"); // variable establecida de la contrase�a
	
	
	do {
  		
        printf("Ingrese la contrase�a: ");
		scanf("%99s", &attempt);
        count++; // aca se guardan los intentos
        
        
        if (strcmp(attempt, contra) != 0){
        
            printf("Lo siento, contrase�a equivocada.\n"); // si es incorrecta
            
		} else {
			
			printf("Contrase�a Correcta."); // si la contrase�a es correcta
			
			return 0;
			
		}
        
    } while (count<3);

	printf("Numeros maximos de intentos superados.");	
	
	return 0;
}
