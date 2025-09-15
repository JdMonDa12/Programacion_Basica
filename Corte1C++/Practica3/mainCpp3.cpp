#include <iostream>
#include <iomanip> // esto es para mostrar los decimales necesarios :p

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float Fahr, Cels;
	
	float Lower, Upper, Step;
	
	Lower=0;
	Upper=300;
	Step=20;
	
	Fahr=Lower;
	
	while (Fahr <= Upper){
		
		Cels=5*(Fahr-32)/9;
		
		std::cout << std::fixed << Fahr << "\t" << std::setprecision(1) << Cels << "\n" << std::setprecision(0)<< std::endl;
		
		Fahr=Fahr+Step;
		
	}
	
	
	return 0;

}
