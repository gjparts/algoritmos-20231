#include<iostream>
#include "persona.h"

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
	
	return 890;
}
