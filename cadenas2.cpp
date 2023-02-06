#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	//leer una cadena de texto
	string str;
	cout << "Digitar una cadena de texto: ";
	getline(cin,str);
	
	//Convertir a minusculas
	//sacar una copia de la variable original para aplicarle la transformacion
	string minus = str;
	transform(minus.begin(), minus.end(), minus.begin(), ::tolower);
	
	cout << "La cadena original es: " << str << endl;
	cout << "La cadena convertida a minusculas es: " << minus << endl;
	
	//convertir a mayusculas
	string mayus = str;
	transform(mayus.begin(), mayus.end(), mayus.begin(), ::toupper);
	cout << "La cadena convertida a mayusculas es: " << mayus << endl;
	
	return 345;
}
