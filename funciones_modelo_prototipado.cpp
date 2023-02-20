#include <iostream>

using namespace std;

/* MODELO BASADO EN PROTOTIPOS
se declara los prototipos (firmas de funcion) antes del main
despues del main se implementa las funciones de los prototipos
*/
int suma(int a, int b);
void saludar(string nombre);

int main(){
	cout << suma(2,2) << endl;
	cout << suma(3,7) << endl;
	saludar("Gerardo");
	
	return 378;
}

//implementacion de funciones
int suma(int a, int b){
	return a+b;
}

void saludar(string nombre){
	cout << "Hola " << nombre << endl;
}
