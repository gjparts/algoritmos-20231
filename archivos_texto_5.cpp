/*
EJERCICIO DEL DIA: Hacer un programa que genere un nuevo archivo de texto con
	1000 numeros enteros al azar entre 1 y 99. No importa que se repitan.
	
	-> Si el archivo ya existe entonces que lo sobreescriba.
*/
#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

int main(){
	fstream archivo;
	srand(time(NULL));
	
	//abrir el archivo en modo Output (sobreescribir el archivo perdiendo lo que ya estaba)
	archivo.open("salida.txt", ios::out);
	
	if( archivo.is_open() )
	{
		for( int i = 1; i <= 1000; i++ )
		{
			archivo << rand()%(99-1+1)+1 << endl;
		}
		
		//IMPORTANTE! cerrar el archivo
		archivo.close();
	}
	else
		cout << "No fue posible abrir el archivo para escribir" << endl;
	
	return 123;
}
