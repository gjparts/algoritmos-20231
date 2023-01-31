/*
Hacer un programa donde definan un arreglo de 50 posiciones, lo deben
llenar con numeros al azar entre 10 y 90. Por ultimo imprimir el
contenido de dicho arreglo.
*/
#include <iostream>
#include<time.h>

using namespace std;

int main(){
	//iniciar el generador de numeros aleatorios
	srand(time(NULL));
	int min = 10, max = 90;
	int arreglo[50];
	int sizeArreglo = end(arreglo)-begin(arreglo);
	//llenar el arreglo con numeros al azar
	for( int i = 0; i < sizeArreglo; i++ ){
		arreglo[i] = rand()%(max-min+1)+min;
		cout << "Posicion " << i << ", Valor: " << arreglo[i] << endl;
	}
	
	return 123;
}
