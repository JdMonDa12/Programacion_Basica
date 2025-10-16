#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int PorHora, Horas, SueldoBrut, Reten, SueldoNet;
	
	char empled[500]; 
	
	printf("Ingrese su nombre: "); 
	scanf("%s", empled);
	
	printf("Ingrese las horas trabajadas: ");
	scanf("%d", &Horas);
	
	printf("Ingrese el precio por hora: ");
	scanf("%d", &PorHora);
	
	SueldoBrut=Horas*PorHora;
	
	Reten=(SueldoBrut*5)/100;
	
	SueldoNet=SueldoBrut-Reten;
	
	printf("Empleado: %s. Sueldo bruto: %d. Retencion: %d. Sueldo neto: %d.", empled, SueldoBrut, Reten, SueldoNet);
	
	return 0;
}
