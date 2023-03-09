#ifndef PERSONA_H
#define PERSONA_H

#include<iostream>
using namespace std;

class Persona{
	private:
		char genero;
	public:
		string nombre;
		string identidad;
		//constructores
		Persona(){
			this->nombre = "no tiene";
			this->identidad = "no tiene";
			this->genero = 'X';
		}
		Persona(string nombre, string identidad, char genero){
			this->nombre = nombre;
			this->identidad = identidad;
			this->genero = 'X';
			this->setGenero(genero);
		}
		//metodos
		char getGenero(){
			return this->genero;
		}
		void setGenero( char genero ){
			if( genero == 'M' || genero == 'F' || genero == 'X' )
				this->genero = genero;
		}
};

#endif
