#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float  Prec, Unid, PrecTot;
	
	char product[500];
	
	printf("Ingrese el nombre del producto: ");
	scanf("%[^\n]", product); // este porcentaje es para que la variable "product" pueda recibir nombres con espacios
	
	printf("Ingrese las unidades: ");
	scanf("%f", &Unid);
	
	printf("Ingrese el precio por unidad: ");
	scanf("%f", &Prec);
	
	PrecTot = Unid*Prec;
	
	printf("Producto: %s. Unidades vendidas: %.0f. Precio total: %.0f.\n", product, Unid, PrecTot);
	
	return 0;
}
