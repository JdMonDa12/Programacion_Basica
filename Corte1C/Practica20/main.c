#include <stdio.h>
#include <stdlib.h>

int main() {
	
    char word1[] = "JoseMd12";
    
    char word2[] = "JoseMd12";
    
    
    int iguales = 1;
    
    int i;
    

    for (i = 0; word1[i] != '\0' && word2[i] != '\0'; i++) { //comparar strings
    
        if (word1[i] != word2[i]) { 
        
            iguales = 0;
            
            break;
            
        }
    }

    if (iguales == 1) {
    	
        printf("Los strings son iguales.\n");
        
    } else {
    	
        printf("Los strings no son iguales.\n");
        
    }

return 0;

}
