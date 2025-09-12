#include <stdio.h>
#include <stdlib.h>

// :PPP omg q buen codificador soy :OOOOO

int main(int argc, char *argv[]) {
	
	int Fahr, Cels;
	
	int Lower, Upper, Step;
	
	Lower=0;
	Upper=300;
	Step=20;
	
	Fahr=Lower;
	while (Fahr <= Upper){
		Cels=5*(Fahr-32)/9;
		printf("%d\t%d\n", Fahr, Cels);
		Fahr=Fahr+Step;
	}
	
	return 0;
}
