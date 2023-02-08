#include <iostream>

using namespace std;

int main()
{
	//reemplazo de char en una cadena
	string str = "Gerardo";
	str[4] = 'R';
	str[1] = '3';
	cout << str << endl;
	
	/*EJERCICIO: leer una cadena de texto, reemplazar dentro de ella
	todos los espacios en blanco por guiones bajos. Imprimir la cadena.
	ejemplo:
	Digitar cadena: Gerardo Josue Portillo
	resultado:
	Gerardo_Josue_Portillo
	*/
	string cadena;
	cout << "Digitar la cadena de texto: ";
	getline(cin,cadena);
	
	for(int i = 0; i < cadena.size(); i++){
		if( cadena[i] == ' ' )
			cadena[i] = '_';
	}
	cout << "Resultado: " << cadena << endl;
	
	return 678;
}
