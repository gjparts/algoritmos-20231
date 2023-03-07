#include<iostream>
#include "producto.h"

using namespace std;

int main(){
	Producto *p1 = new Producto("Barra de Chocolate","Snickers");
	p1->setPrecio(15.75);
	p1->setPrecio(-30);
	p1->imprimir();
	cout << p1->toString() << endl;
	
	Producto *p2 = new Producto("Coca Cola 3LT","Coca Cola",65);
	p2->imprimir();
	cout << "El producto p2 ya con ISV vale: " << ( p2->getPrecio()*1.15 ) << endl;
	
	return 876;
}
