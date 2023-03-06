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
			this->anio = 0;
		}
		//constructor con tres parametros
		Carro( string marca, string modelo, int anio ){
			this->marca = marca;
			this->modelo = modelo;
			//el año esta limitado a solo valores positivos
			this->anio = 0;
			this->setAnio(anio);
			
			//solo para fines educativos vamos a imprimir el
			//año que tiene el objeto construido aqui
			//cout << "El año del objeto recien construido es: " << this->anio << endl;
		}
		//metodos (funciones)
		//metodo set para ponerle un valor al año
		void setAnio( int anio ){
			//el año enviado debe ser un numero positivo para ser aceptado
			if( anio >= 0 )
				this->anio = anio;
		}
		//metodo get para poder leer el valor almancenado en anio
		int getAnio(){
			//retornar el valor del atributo anio
			return this->anio;
		}
		//metodo encender
		void encender(){
			cout << "El carro se ha ecendido" << endl;
		}
		//metodo apagar
		void apagar(){
			cout << "El carro se ha apagado" << endl;
		}
		//metodo imprimir
		void imprimir(){
			cout << "**** CARRO ****" << endl;
			cout << "Marca: " << this->marca << endl;
			cout << "Modelo: " << this->modelo << endl;
			cout << "Año: " << this->anio << endl;
		}
		//metodo toString, devuelve un resumen del carro pero como una cadena de texto
		string toString(){
			string str;
			str =  "Marca: "+this->marca+", ";
			str += "Modelo: "+this->modelo+", ";
			str += "Año: "+to_string( this->anio );
			
			return str;			
		}
};	//ojo este punto y coma va al cerrar la clase

#endif
