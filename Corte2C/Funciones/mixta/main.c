#include <stdio.h>
#include <stdlib.h>


int selec(){
	
	int func;
	
	printf("Seleccione su operacion:\n");
    printf("1. Multiplicacion\n");
    printf("2. Division\n");
    printf("3. Resta\n");
    printf("4. Suma\n");
    
    printf("Numero: ");
    
    scanf("%d", &func);
    
    return func;
	
}

int ent(){
	
	int val;
	
	printf("Ingrese su valor:\n");
	
	scanf("%d", &val);
	
	return val;
	
}

int multiplicacion(int a1, int b1){
	
	int r1=a1*b1;
	
	return r1;
	
}

int division(int a2, int b2){
	
	int r2=a2/b2;
	
	return r2;
	
}

int resta(int a3, int b3){
	
	int r3=a3-b3;
	
	return r3;
	
}

int suma(int a4, int b4){
	
	int r4=a4+b4;
	
	return r4;
	
}

void show(int r){
	
	printf("Resultado= %d", r);
	
}

int main() {
	
	int val1 = ent();
	int val2 = ent();
	int resul;
	int oper = selec();

	if (oper == 1) {
		
        resul = multiplicacion(val1, val2);
        
    } else if (oper == 2) {
    	
        resul = division(val1, val2);
        
    } else if (oper == 3) {
    	
        resul = resta(val1, val2);
        
    } else if (oper == 4) {
    	
        resul = suma(val1, val2);
        
    } else {
    	
        printf("Opcion no valida. \n");
        return 1;
        
    }

    show(resul);

	return 0;
}
