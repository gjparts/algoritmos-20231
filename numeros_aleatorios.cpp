#include<iostream>
#include<time.h>

using namespace std;

int main(){
	//generar un numero al azar
	//inicializar el generador de numeros al azar
	//le ponemos como semilla (seed) la fecha y hora 
	//de la computadora en milisegundos.
	//ojo esta instruccion solo se pone una vez
	srand(time(NULL));
	
	int azar;
	//generar un numero al azar entre 11 y 57
	azar = rand()%(57-11+1)+11;
	cout << "numero al azar: " << azar << endl;
	
	//imprimir 10 numeros al azar entre 5 y 25, no importa que se repitan
	for(int i = 1; i <= 10; i++){
		cout << rand()%(25-5+1)+5 << endl;
	}
	
	return 456;
}
