#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int uno, dos, tre;
	
	
	printf("Ingrese el primer numero: ");
	scanf("%d", &uno);
	
	printf("Ingrese el segundo numero: ");
	scanf("%d", &dos);
	
	printf("Ingrese el tercer numero: ");
	scanf("%d", &tre);
	
	
	
	
	if(tre<dos && dos<uno){  // SI UNO ES EL MAYOR NUMERO
		printf("El numero %d es el mayor. El numero %d es el menor", uno, tre);
		return 0;
	}
	
	if(dos<tre && tre<uno){
		printf("El numero %d es el mayor. El numero %d es el menor", uno, dos);
		return 0;
	}
	
	if(tre<dos && dos==uno){
		printf("El numero %d y %d son los mayores. El numero %d es el menor", uno, dos, tre);
		return 0;
	}
	
	if(dos<tre && tre==uno){
		printf("El numero %d y %d son los mayores. El numero %d es el menor", uno, tre, dos);
		return 0;
	}
	
	if(tre==dos && dos<uno){
		printf("El numero %d y %d son los menores. El numero %d es el mayor", tre, dos, uno);
		return 0;
	}
	
	if(tre<uno && uno<dos){ // SI DOS ES EL MAYOR NUMERO
		printf("El numero %d es el mayor. El numero %d es el menor", dos, tre);
		return 0;
	}
	
	if(uno<tre && tre<dos){
		printf("El numero %d es el mayor. El numero %d es el menor", dos, uno);
		return 0;
	}
		
	if(uno<tre && tre==dos){
		printf("El numero %d y %d son los mayores. El numero %d es el menor", dos, tre, uno);
		return 0;
	}
	
	if(tre==uno && uno<dos){
		printf("El numero %d y %d son los menores. El numero %d es el mayor", tre, uno, dos);
		return 0;
	}
	
	if(dos<uno && uno<tre){ // SI TRES ES EL MAYOR NUMERO
		printf("El numero %d es el mayor. El numero %d es el menor", tre, dos);
		return 0;
	}
	
	if(uno<dos && dos<tre){
		printf("El numero %d es el mayor. El numero %d es el menor", tre, uno);
		return 0;
	}
	
	if(dos==uno && uno<tre){
		printf("El numero %d y %d son los menores. El numero %d es el mayor", dos, uno, tre);
		return 0;
	}
	
	if(uno==dos && dos==tre){
		printf("Los tres numeros son iguales.");
		return 0;
	}
	
	
	return 0;
}
