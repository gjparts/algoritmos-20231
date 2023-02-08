#include<iostream>
using namespace std;

int main(){
	//conversiones: numeros a string
	int numero = 14;
	string cadenatexto;
	cadenatexto = to_string(numero);
	cout << cadenatexto << endl;
	
	cadenatexto = cadenatexto + "1";
	cout << cadenatexto << endl;
	
	numero = numero + 1;
	cout << numero << endl;
	
	//conversiones: string a numero
	//string a entero
	string t = "10.8";
	int u = stoi(t);
	cout << u << endl;
	
	//string a float
	float f = stof(t);
	cout << f << endl;
	
	//string a double
	double d = stod(t);
	cout << d << endl;
	
	return 345;
}
