#include<iostream>
#include<math.h>
using namespace std;

//prototipo de funcion
void elevarArregloAlCuadrado(int arr[], int tamanoArreglo);

int main(){
	//USO DE APUNTADORES CON ARREGLOS
	/*Hacer una funcion que para un arreglo apuntado de
	numeros enteros altere todos sus elementos elevando
	cada uno al cuadrado.
	Imprimir el arreglo resultante*/
	
	int valores[] = { 10, 20, 30, 40 };
	int n = end(valores)-begin(valores);
	elevarArregloAlCuadrado(valores, n );
	
	//imprimir todos los valores del arreglo
	for( int i = 0; i < n; i++ )
		cout << valores[i] << endl;
	
	return 975;
}

//implementacion de funciones
void elevarArregloAlCuadrado(int arr[], int tamanoArreglo){
	
	for( int i = 0; i < tamanoArreglo; i++ )
		arr[i] = pow( arr[i], 2 );	//elevar cada elemento del arreglo al cuadrado
}

