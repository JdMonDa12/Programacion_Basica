#include <stdio.h>
#include <stdlib.h>

int ent(){
	
	int val;
	
	printf("Ingrese el primer valor:\n");
	
	scanf("%d", &val);
	
	return val;
	
}

int rest(int a, int b){
	
	int r=a-b;
	
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
	
	resul=rest(val1, val2);
	
	show(resul);
	
	return 0;
}
