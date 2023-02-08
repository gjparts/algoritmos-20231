#include<iostream>

using namespace std;

int main(){
	//buscar una cadena dentro de otra
	string str = "Esta es una cadena de texto bonita";
	string buscar;
	cout << "Ingrese el texto a buscar: ";
	getline(cin, buscar);
	
	//aqui almacenaremos la posicion donde se encontro la cadena buscada
	int posicion;
	
	posicion = str.find(buscar,0);
	/*donde:
	str es la cadena dentro la cual vamos a buscar
	buscar es la cadena que deseamos encontrar
	0 es la posicion a partir de la cual comenzaremos a buscar
	  en este caso 0 quiere decir comenzar a buscar desde el
	  inicio de str*/
	if( posicion == -1 )
		cout << "Texto a buscar no encontrado";
	else
		cout << "Texto encontrado en la posicion " << posicion << endl;
	
	/*TAREA: hacer un programa que muestre cuantas veces encontro una cadena
	dentro de otra. Subirlo al campus virtual en la Tarea 1.3*/
		
	return 9876;
}
