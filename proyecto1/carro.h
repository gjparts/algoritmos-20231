/*Crear un proyecto y dentro de el crear una clase llamada carro de la
cual se manejara los atributos marca, modelo los cuales serán publicos
y año el cual será privado.
-> crearle al menos dos constructores
-> ponerle al menos tres metodos a su gusto
-> crear los respectivos set y get para año e impedir
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
};	//ojo este punto y coma va al cerrar la clase

#endif
