#include <iostream>

int main() {
	
	int myNumbers[] = {25, 50, 75, 100}; // datos principales
	
	myNumbers[0] = 33; // equivalencia establecida APARTE de los datos principales
	
	printf("%d", myNumbers[0]); // imprime la NUEVA EQUIVALENCIA en lugar del primer dato

	return 0;
}
