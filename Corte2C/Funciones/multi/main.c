#include <stdio.h>
#include <stdlib.h>

int ent(){
	
	int val;
	
	printf("Ingrese el primer valor:\n");
	
	scanf("%d", &val);
	
	return val;
	
}

int mult(int a, int b){
	
	int r=a*b;
	
	return r;
	
}

void show(int r){
	
	printf("Resultado= %d", r);
	
}

int main() {
	
	int val1;
	int val2;
	int resul;
	
	val1=ent();
	val2=ent();
	
	resul=mult(val1, val2);
	
	show(resul);
	
	return 0;
}
