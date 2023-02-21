#include<iostream>
#include<algorithm>

using namespace std;

//prototipos de funcion
void mayusculas(string *cadena);

int main(){
	/*APUNTADORES CON STRING
	hacer una funcion a la que le enviemos un string apuntado
	y que lo convierta a mayusculas
	
	hacer una funcion a la que le enviemos un string apuntado
	y que le reemplaze sus espacios en blanco por guiones bajos
	*/
	string x = "Gerardo Josue Portillo";
	mayusculas(&x);
	cout << x << endl;
	
	return 975;
}

//implementacion de funciones
void mayusculas(string *cadena){
	//sacar una copia de la variable apuntada (externa) hacia una variable local
	string copia = *cadena;
	//transformar la variable local
	transform( copia.begin(), copia.end(), copia.begin(), ::toupper );
	//sobreescribir el valor de la variable apuntada por el valor de la variable local
	*cadena = copia;
}
