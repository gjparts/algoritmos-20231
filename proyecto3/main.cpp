#include<iostream>
#include "persona.h"
#include "cuentaahorro.h"

using namespace std;

int main(){
	Persona *p1 = new Persona();
	p1->nombre = "Filomeno";
	p1->setGenero('M');
	cout << "p1" << endl;
	cout << p1->nombre << endl;
	cout << p1->identidad << endl;
	cout << p1->getGenero() << endl;
	
	Persona *p2 = new Persona("Gerardo","1401198200000",'M');
	cout << "p2" << endl;
	cout << p2->nombre << endl;
	cout << p2->identidad << endl;
	cout << p2->getGenero() << endl;
	
	//imprime la direccion de memoria del objeto p2 de clase Persona
	cout << p2 << endl;
	
	CuentaAhorro *c1 = new CuentaAhorro();
	cout << c1->numero << endl;
	//imprime CERO porque no el objeto cliente no tiene memoria
	//ya que es NULL (constructor sin parametros de CuentaAhorro)
	cout << c1->cliente << endl;
	//que pasaria si quiero imprimir el nombre del cliente de c1?
	//como c1 es NULL entonces es posible que le programa crashee
	//por lo tanto hacemos la validacion de NULL para evitar errores (NULL Safety)
	if( c1->cliente != NULL )
		cout << c1->cliente->nombre << endl;
	
	cout << "Imprimir informacion sobre c2:" << endl;
	CuentaAhorro *c2 = new CuentaAhorro("14141",p2);
	cout << "numero de cuenta: " << c2->numero << endl;
	cout << "cliente: " << c2->cliente << endl;
	if( c2->cliente != NULL )
	{
		cout << "nombre del cliente: " << c2->cliente->nombre << endl;
		cout << "identidad del cliente: " << c2->cliente->identidad << endl;
		cout << "genero del cliente: " << c2->cliente->getGenero() << endl;
	}
	
	CuentaAhorro *c3 = new CuentaAhorro("1234-1234-9", NULL);
	cout << "Imprimir informacion sobre c3:" << endl;
	cout << "direccion de memoria del cliente para c3: " << c3->cliente << endl;
	if( c3->cliente != NULL )
		cout << "nombre del cliente: " << c3->cliente->nombre << endl;
	
	c3->cliente = p1;
	if( c3->cliente != NULL )
		cout << "nombre del cliente: " << c3->cliente->nombre << endl;
	
	//hacer pruebas de saldos en c3
	c3->depositar(5000);
	cout << "saldo de c3: " << c3->getSaldo() << endl;
	c3->depositar(500);
	cout << "saldo de c3: " << c3->getSaldo() << endl;
	c3->depositar(-1000);
	cout << "saldo de c3: " << c3->getSaldo() << endl;
	c3->retirar(2000);
	cout << "saldo de c3: " << c3->getSaldo() << endl;
	c3->retirar(5000);
	cout << "saldo de c3: " << c3->getSaldo() << endl;
	
	return 890;
}
