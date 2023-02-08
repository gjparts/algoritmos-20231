#include<iostream>
#include <algorithm>

using namespace std;

int main(){
	//comparar dos cadenas de texto
	string a,b;
	cout << "Digitar cadena a:";
	getline(cin,a);
	cout << "Digitar la cadena b: ";
	getline(cin,b);
	
	if( a == b )
		cout << "Cadenas son iguales" << endl;
	else
		cout << "Cadenas no son iguales" << endl;
		
	/*En base a lo aprendido de cadenas de texto en c++
	comparar dos cadenas de texto SIN IMPORTAR las mayusculas
	y minusculas, o sea IGNORAR EL CHARACTER CASING. Sin alterar
	las cadenas de texto originales.*/
	string ca = a, cb = b;
	transform(ca.begin(), ca.end(), ca.begin(), ::tolower );
	transform(cb.begin(), cb.end(), cb.begin(), ::tolower );
	
	if( ca == cb )
		cout << "Las cadenas son iguales sin ignoramos el casing." << endl;
	else
		cout << "Las cadenas no son iguales incluso ignorando el casing." << endl;
	
	return 987;
}
