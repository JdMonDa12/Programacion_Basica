#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int uno, dos;
	
	printf("Ingrese el primer numero: ");
	scanf("%d", &uno);
	
	printf("Ingrese el segundo numero: ");
	scanf("%d", &dos);
	
	if(dos<uno){
		printf("El numero %d es mayor que el numero %d", uno, dos);
		return 0;
	}
	
	if(dos>uno){
		printf("El numero %d es mayor que el numero %d", dos, uno);
		return 0;
	}
	
	if(dos=uno){
		printf("El numero %d es igual al numero %d", uno, dos);
		return 0;
	}
	
	return 0;
}
