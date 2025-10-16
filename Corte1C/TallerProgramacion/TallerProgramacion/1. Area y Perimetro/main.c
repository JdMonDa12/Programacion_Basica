#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	
	float Alt, Anch, Rad, Area, Peri, Lado1, Lado2, Lado3;
	const float Pi=3.1415;
	
	
	char figura[4][10]; // se declara la cantidad de variables de texto que se van a usar (4)
	
	strcpy(figura[0], "cuadrado");
	strcpy(figura[1], "rectangulo");
	strcpy(figura[2], "triangulo");
	strcpy(figura[3], "circulo");
	
	
	printf("Elija el tipo de figura para calcular Area y Perimetro (en minusculas): "); // aca se elige la figura, para luego ir a
	//los diferentes bloques respectivos
	
	scanf("%s", &figura ); // se recoge y almacena el dato de texto
	
	if(strcmp(figura, "cuadrado") == 0){ // bloque de area y perimetro del cuadrado
		
		printf("Ingrese la altura o ancho: ");
		scanf("%f", &Alt); // uso Alt aca, pero realmente no importa
		
		Area=Alt*Alt;
		Peri=4*Alt;
		
		printf("El area del cuadrado es igual a: %.2f\n", Area);
		printf("El perimetro del cuadrado es igual a: %.2f\n", Peri);
	
	return 0;
		
	}
	
	if(strcmp(figura, "rectangulo") == 0){ // bloque de area y perimetro del rectangulo
		
		printf("Ingrese la altura: ");
		scanf("%f", &Alt);
		
		printf("Ingrese el ancho: ");
		scanf("%f", &Anch);
		
		Area=Alt*Anch;
		Peri=2*(Alt+Anch);
		
		printf("El area del rectangulo es igual a: %.2f\n", Area);
		printf("El perimetro del rectangulo es igual a: %.2f\n", Peri);
		
	return 0;
		
	}
	
	if(strcmp(figura, "triangulo") == 0){ // bloque de area y perimetro del triangulo
		
		printf("Ingrese la altura: ");
		scanf("%f", &Alt);
		
		printf("Ingrese el ancho: ");
		scanf("%f", &Anch);
		
		Area=Alt*Anch;
		
		 printf("Ingrese el lado 1 del triangulo: "); // el perimetro de un triangulo no se puede encontrar a partir de solo base y altura
    	scanf("%f", &Lado1);
    	printf("Ingrese el lado 2 del triangulo: "); // se necesitan las medidas de los lados
    	scanf("%f", &Lado2);
    	printf("Ingrese el lado 3 del triangulo: ");
    	scanf("%f", &Lado3);
		
		Peri=Lado1+Lado2+Lado3;
		
		printf("El area del triangulo es igual a: %.2f\n", Area);
		printf("El perimetro del triangulo es igual a: %.2f\n", Peri);
		
	return 0;
		
	}
	 
	if(strcmp(figura, "circulo") == 0){ // bloque de area y perimetro del circulo
		
		printf("Ingrese el radio: ");
		scanf("%f", &Rad);
		
		Area=Pi*Rad*Rad; // se usa la variable constante Pi establecida al inicio
		Peri=2*Pi*Rad;
		
		printf("El area del circulo es igual a: %.2f\n", Area);
		printf("El perimetro del circulo es igual a: %.2f\n", Peri);
		
	return 0;
		
	}
	
	
	
	
	return 0;
}
