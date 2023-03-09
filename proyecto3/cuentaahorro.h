#ifndef CUENTAAHORRO_H
#define CUENTAAHORRO_H

#include<iostream>
#include "persona.h"

using namespace std;

class CuentaAhorro{
	private:
		float saldo;
	public:
		string numero;
		Persona *cliente;
	//constructores
	CuentaAhorro(){
		this->numero = "no tiene";
		this->saldo = 0.00;
		//como este es el constructor sin parametros
		//no se envia un objeto de clase Persona para el cliente
		//por lo tanto el cliente de la cuenta es NULL o sea no tiene
		//objeto asignado
		this->cliente = NULL;
	}
	CuentaAhorro(string numero, Persona *cliente){
		this->numero = numero;
		this->saldo = 0.00;
		this->cliente = cliente;
	}
};

#endif
