#include <iostream>
#include "carro.h"

using namespace std;

int main(){
	//instanciar un nuevo objeto de clase Carro
	Carro *c1 = new Carro();
	//imprimir algunos atributos del objeto c1
	cout << "La marca de c1 es: " << c1->marca << endl;
	cout << "El modelo de c1 es: " << c1->modelo << endl;
	
	//instanciar un Carro pero usando constructor con parametros
	Carro *c2 = new Carro("Toyota","Corolla");
	cout << "La marca de c2 es: " << c2->marca << endl;
	cout << "El modelo de c2 es: " << c2->modelo << endl;
	
	//construir un Carro usando constructor de tres parametros
	Carro *c3 = new Carro("Pontiac","Vibe",2007);
	cout << "La marca de c3 es: " << c3->marca << endl;
	cout << "El modelo de c3 es: " << c3->modelo << endl;
	
	return 234;
}
