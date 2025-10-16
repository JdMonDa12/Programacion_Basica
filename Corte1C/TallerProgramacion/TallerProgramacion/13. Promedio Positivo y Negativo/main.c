#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float num=0;
	
	int num2=0;
	
	float count=0;
	
	do {
		 
        if (num2>=0){
        
            printf("Ingrese su numero: "); 
            scanf("%d", &num2);
			count++;
			num=num+num2;
            
		} else {
			
			num=num-num2;
			--count;
			num=num/count;
			printf("El promedio de los numeros es igual a: %.2f", num); 
			
			return 0;
			
		}
        
    } while (num>0);
	
	return 0;
}
