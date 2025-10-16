#include <stdio.h>
#include <stdlib.h>

int prim(int num) {
	
    if (num <= 1) {
    	
        return 0; // No es primo
        
    }
    
    int i;
    
    for (i = 2; i * i <= num; i++) {
    	
        if (num % i == 0) {
        	
            return 0; // No es primo
            
        }
        
    }
    
    return 1; // Es primo
}


int main() {
	
    int num;
    
    printf("Introduce un numero: ");
    
    scanf("%d", &num);
    

    if (prim(num)) {
    	
        printf("%d es un numero primo.\n", num);
        
    } else {
    	
        printf("%d no es un numero primo.\n", num);
        
    }

    return 0;
}
