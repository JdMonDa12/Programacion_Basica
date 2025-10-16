#include <stdio.h>
#include <stdlib.h>


int main() {
	
	float nota;
	
	printf("Ingrese la nota a cualificar del 0 al 10: ");
	scanf("%f", &nota);
	
	if(nota<0){
		printf("Nota invalida.");
		return 0;
	}
	
	if(0<=nota && nota<5){
		printf("Suspenso.");
		return 0;
	}
	
	if(5<=nota && nota<7){
		printf("Aprobado.");
		return 0;
	}
	
	if(7<=nota && nota<9){
		printf("Notable.");
		return 0;
	}
	
	if(0<=nota && nota<10){
		printf("Sobresaliente.");
		return 0;
	}
	
	if(nota==10){
		printf("Matricula de honor.");
		return 0;
	}
	
	if(nota>10){
		printf("Nota invalida.");
		return 0;
	}
	
	return 0;
}
