#include<iostream>
using namespace std;

int main(){
	//declarar una cadena de texto
	string cadena1;
	string cadena2 = "Gerardo";
	
	//imprimir cadena de texto
	cout << cadena1 << endl;
	cout << cadena2 << endl;
	
	//capturar una cadena de texto
	cout << "Ingrese una cadena de texto: ";
	getline(cin,cadena1);
	
	cout << "La cadena digitada fue: " << cadena1 << endl;
	
	//tamaño de cadena de texto
	cout << "Numero de caracteres de la cadena: " << cadena1.size() << endl;
	
	//extraer un caracter en determinadas posiciones de la cadena
	cout << cadena1[0] << endl;
	cout << cadena1[6] << endl;
	cout << cadena1[ cadena1.size()-1 ];
	
	cout << endl << "*******************" << endl;
	//recorrer la cadena caracter por caracter
	for( int i = 0; i < cadena1.size(); i++ )
	{
		cout << cadena1[i] << endl;
	}
	
	string cadena3;
	cout << "Digitar una cadena: ";
	getline(cin,cadena3);
	
	for( int i = 0; i < cadena3.size(); i++ )
	{
		cout << cadena3[i] << "   ";
	}
	
	cout << endl << "La cadena inversa es: ";
	for( int i = cadena3.size(); i >= 0; i-- )
	{
		cout << cadena3[i];
	}
	
	return 567;
}











