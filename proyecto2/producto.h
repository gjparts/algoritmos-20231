#ifndef PRODUCTO_H
#define	PRODUCTO_H

#include <iostream>
using namespace std;

class Producto{
	private:
		double precio;
	public:
		string nombre;
		string marca;
		//constructores
		Producto(string nombre, string marca){
			this->nombre = nombre;
			this->marca = marca;
			this->precio = 0.00;
		}
		Producto(string nombre, string marca, double precio){
			this->nombre = nombre;
			this->marca = marca;
			this->precio = 0.00;
			this->setPrecio(precio);
		}
		//metodos de la clase
		double getPrecio(){
			return this->precio;
		}
		void setPrecio(double precio){
			if( precio >= 0 )
				this->precio = precio;
		}
		void imprimir(){
			cout << "**** PRODUCTO ****" << endl;
			cout << "Nombre: " << this->nombre << endl;
			cout << "Marca: " << this->marca << endl;
			cout << "Precio: " << this->precio << endl;
		}
		string toString(){
			string str;
			str = "Nombre: "+this->nombre+", Marca: "+this->marca+", Precio: "+to_string(this->precio);
			return str;
		}
};
#endif
