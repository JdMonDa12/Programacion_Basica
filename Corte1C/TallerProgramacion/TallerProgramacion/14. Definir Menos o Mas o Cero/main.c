#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int num;
	
	int count1=0;
	
	int count2=0;
	
	
	do {
		
		printf("Ingrese su numero: "); 
        scanf("%d", &num);
		 
        if (num>0){
        
			count1++;
            
		} 
		
		if (num<0){
			
			count2++;
			
		}
		
		if (num==0){
			
			printf("Numeros positivos: %d. Numeros negativos: %d", count1, count2);
			
		}
        
    } while (num!=0);

	return 0;
}
