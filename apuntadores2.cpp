#include<iostream>

using namespace std;

int main(){
	//INCORRECTO, lo que no se debe hacer con apuntadores
	/*el proposito de los apuntadores es conectar ambitos
	no es util apuntar variables dentro del propio ambito
	excepto: cuando trabajamos con orientacion a objetos.
	en resumen: no usar apuntadores dentro del propio ambito con
	variables de tipo primitivo solo utsarlas con declaracion de objetos*/
	cout << "Programa inicia" << endl;
	
	int *b;
	*b = 50;
	cout << b << endl;
	
	cout << "El programa jamas llegara aqui" <<endl;
	
	return 975;
}

