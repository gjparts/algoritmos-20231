#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	//concaternar dos o mas cadenas de texto
	string x = "Gerardo";
	string y = "Josue";
	string z = "Portillo";
	string unir;
	
	unir = "Soy "+x+" "+y+" "+z;
	
	cout << unir << endl;
	
	//concatenar un char a la cadena de texto
	unir = unir + '.';
	cout << unir << endl;
	
	/*Ejercicio: Capturar una cadena de texto N y luego a partir de ella generar
	una nueva cadena de texto pero con el contenido de N en mayusculas y
	colocar tres asteriscos al inicio y tres asteriscos al final en la nueva
	cadena. Posteriormente imprimir unicamente la nueva cadena.
	ejemplo:
	digitar cadena N: Gerardo Portillo
	nueva cadena:
	***GERARDO PORTILLO***
	*/
	string n;
	cout << "Digitar la cadena N: ";
	getline(cin,n);
	
	string nueva = n;
	transform(nueva.begin(), nueva.end(), nueva.begin(), ::toupper);
	
	nueva = "***"+nueva+"***";
	
	cout << endl << "nueva cadena: " << endl << nueva << endl;
	
	return 345;
}
