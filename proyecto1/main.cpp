#include <iostream>
#include "carro.h"

using namespace std;

int main(){
	//instanciar un nuevo objeto de clase Carro
	Carro *c1 = new Carro();
	c1->marca = "Honda";
	//imprimir algunos atributos del objeto c1
	cout << "La marca de c1 es: " << c1->marca << endl;
	cout << "El modelo de c1 es: " << c1->modelo << endl;
	
	//instanciar un Carro pero usando constructor con parametros
	Carro *c2 = new Carro("Toyota","Corolla");
	cout << "La marca de c2 es: " << c2->marca << endl;
	cout << "El modelo de c2 es: " << c2->modelo << endl;
	
	//construir un Carro usando constructor de tres parametros
	Carro *c3 = new Carro("Pontiac","Vibe",2007);
	c3->marca = "PONTIAC";
	//c3->anio = 2009; esto da error porque anio es privado en la clase Carro
	cout << "La marca de c3 es: " << c3->marca << endl;
	cout << "El modelo de c3 es: " << c3->modelo << endl;
	cout << "El año de c3 es: " << c3->getAnio() << endl;
	
	Carro *c4 = new Carro();
	c4->marca = "Nissan";
	c4->modelo = "Sentra";
	cout << "La marca de c4 es: " << c4->marca << endl;
	cout << "El modelo de c4 es: " << c4->modelo << endl;
	
	//ponerle un año a c4
	c4->setAnio(2005);
	cout << "El año de c4 es: " << c4->getAnio() << endl;
	c4->setAnio(-9999);
	cout << "El año de c4 es: " << c4->getAnio() << endl;
	c4->imprimir();
	c4->encender();
	c4->apagar();
	
	cout << c4->toString() << endl;
	
	return 234;
}
