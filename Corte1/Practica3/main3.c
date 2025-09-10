#include <stdio.h>
#include <stdlib.h>

// :PPP omg q buen codificador soy :OOOOO

int main(int argc, char *argv[]) {
	
	float Fahr, Cels;
	
	float Lower, Upper, Step;
	
	Lower=0;
	Upper=300;
	Step=20;
	
	Fahr=Lower;
	while (Fahr <= Upper){
		Cels=5*(Fahr-32)/9;
		printf("%3.0f %6.1f\n", Fahr, Cels);
		Fahr=Fahr+Step;
	}
	
	return 0;
}
