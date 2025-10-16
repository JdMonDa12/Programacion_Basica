#include <stdio.h>
#include <stdlib.h>



int main() {
	
	
    int year;
    

    printf("Ingrese una cifra anual: ");
    scanf("%d", &year);
    

    // Condición de año bisiesto:
    // - divisible entre 4, pero no entre 100
    // - o divisible entre 400
    
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    	
        printf("%d es bisiesto.\n", year);
        
    } else {
    	
        printf("%d no es bisiesto.\n", year);
        
    }

    return 0;
}
