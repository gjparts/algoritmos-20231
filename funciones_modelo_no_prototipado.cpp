#include <iostream>

using namespace std;

/* MODELO BASADO EN NO USAR PROTOTIPOS
se declara todas las funciones y su implementacion antes del main
*/
//implementacion de funciones
int suma(int a, int b){
	return a+b;
}

void saludar(string nombre){
	cout << "Hola " << nombre << endl;
}

//main queda al final
int main(){
	cout << suma(2,2) << endl;
	cout << suma(3,7) << endl;
	saludar("Gerardo");
	
	return 378;
}


