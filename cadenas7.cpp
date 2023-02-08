#include<iostream>
using namespace std;

int main(){
	//arreglos de string
	string lista[] = { "pera", "manzana", "uva", "naranja" };
	
	//obtener el tamaño
	int tamanio = end(lista)-begin(lista);
	
	for( int i = 0; i < tamanio; i++ )
		cout << lista[i] << endl;
	
	return 345;
}
