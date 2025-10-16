#include <stdio.h>
#include <stdlib.h>

int main() {
	
    int dia, mes;
    

    printf("Ingrese su dia de nacimiento: ");
    scanf("%d", &dia);


    printf("Ingrese su mes de nacimiento (1-12): ");
    scanf("%d", &mes);


    if ((dia >= 21 && mes == 3) || (dia <= 19 && mes == 4))
    
        printf("Su signo zodiacal es Aries.\n");
        
    else if ((dia >= 20 && mes == 4) || (dia <= 20 && mes == 5))
    
        printf("Su signo zodiacal es Tauro.\n");
        
    else if ((dia >= 21 && mes == 5) || (dia <= 20 && mes == 6))
    
        printf("Su signo zodiacal es Géminis.\n");
        
    else if ((dia >= 21 && mes == 6) || (dia <= 22 && mes == 7))
    
        printf("Su signo zodiacal es Cáncer.\n");
        
    else if ((dia >= 23 && mes == 7) || (dia <= 22 && mes == 8))
    
        printf("Su signo zodiacal es Leo.\n");
        
    else if ((dia >= 23 && mes == 8) || (dia <= 22 && mes == 9))
    
        printf("Su signo zodiacal es Virgo.\n");
        
    else if ((dia >= 23 && mes == 9) || (dia <= 22 && mes == 10))
    
        printf("Su signo zodiacal es Libra.\n");
        
    else if ((dia >= 23 && mes == 10) || (dia <= 21 && mes == 11))
    
        printf("Su signo zodiacal es Escorpio.\n");
        
    else if ((dia >= 22 && mes == 11) || (dia <= 21 && mes == 12))
    
        printf("Su signo zodiacal es Sagitario.\n");
        
    else if ((dia >= 22 && mes == 12) || (dia <= 19 && mes == 1))
    
        printf("Su signo zodiacal es Capricornio.\n");
        
    else if ((dia >= 20 && mes == 1) || (dia <= 18 && mes == 2))
    
        printf("Su signo zodiacal es Acuario.\n");
        
    else if ((dia >= 19 && mes == 2) || (dia <= 20 && mes == 3))
    
        printf("Su signo zodiacal es Piscis.\n");
        
    else
    
        printf("Fecha inválida.\n");
        

    return 0;
}
