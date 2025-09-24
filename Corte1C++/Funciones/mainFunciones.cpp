#include <iostream> // <- bibliotecas

using namespace std; 

int sumar(int a, int b){ // SUMA  

int r = a+b;

return r;	
	
}

int restar(int a, int b){ // RESTA
	
int q = a-b;
	
return q;

}

int multi(int a, int b){ // MULTIPLICACION
	
int p = a*b;
	
return p;

}

int main() { // METODO PRINCIPAL!!!!!!!!!!!!!
	
	int h = sumar(3, 2);
	
	int j = restar(3, 2);
	
	int i = multi(3, 2);
		
	cout << h << endl; 
	cout << j << endl;
	cout << i << endl;

	return 0;
}


