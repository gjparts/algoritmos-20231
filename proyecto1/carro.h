/*Crear un proyecto y dentro de el crear una clase llamada carro de la
cual se manejara los atributos marca, modelo los cuales ser�n publicos
y a�o el cual ser� privado.
-> crearle al menos dos constructores
-> ponerle al menos tres metodos a su gusto
-> crear los respectivos set y get para a�o e impedir
   valores negativos en el mismo*/

//AYUDA DE PRECOMPILADOR
//evita ambiguedad al hacer include de esta
//clase desde diferentes archivos
//se recomienda usar el nombre del archivo en mayusculas
//y reemplazar el punto por un guion bajo.
#ifndef CARRO_H
#define CARRO_H

#include <iostream>
using namespace std;

class Carro{
	private:
		//este es el ambito privado (no accesible desde fuera de la clase)
		//atributos privados
		int anio;
	public:
		//este es el ambito publico (accesible desde fuera de la clase)
		//atributos publicos
		string marca;
		string modelo;
		//constructores
		//constructor sin parametros
		Carro(){
			//metodo/funcion que se ejecuta cuando instanciamos un nuevo Carro
			//inicializar los atributos de la clase
			this->marca = "no tiene";
			this->modelo = "no determinado";
			this->anio = 0;
		}
		//constructor con dos parametros
		Carro( string marca, string modelo ){
			this->marca = marca;
			this->modelo = modelo;
		}
		//constructor con tres parametros
		Carro( string marca, string modelo, int anio ){
			this->marca = marca;
			this->modelo = modelo;
			//el a�o esta limitado a solo valores positivos
			if( anio >= 0 )
				this->anio = anio;
			else
				this->anio = 0;
			//solo para fines educativos vamos a imprimir el
			//a�o que tiene el objeto construido aqui
			cout << "El a�o del objeto recien construido es: " << this->anio << endl;
		}
};	//ojo este punto y coma va al cerrar la clase

#endif
