#include<iostream>

using namespace std;
/*APUNTADORES DE MEMORIA
permiten el acceso a informacion entre ambitos distintos
o sea se usan para pasar valores entre ambitos.*/
void sumarCien(int *n);	//suma 100 al numero proporcionado

int main(){
	int a = 50;
	cout << "el valor de a es " << a << endl;
	//aplicar la funcion sumaCient a la variable a
	sumarCien(&a);
	cout << "el nuevo valor de a es " << a << endl;
	//que es &a?
	cout << "La direccion de memoria de a es " << &a << endl;
		
	return 975;
}

//implementacion
//n es un parametro al que le enviamos una referencia (apountador) de memoria
void sumarCien(int *n){
	*n = *n + 100;
}
