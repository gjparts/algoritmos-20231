#include<iostream>
using namespace std;

int main(){
	//caza de errores
	
	string valor;
	cout << "Digitar un valor: ";
	getline(cin, valor);
	
	//convertir el string a entero
	int numero;
	
	try{
		//aqui va el codigo que es propenso a falla
		numero = stoi(valor);
	
		cout << "El numero digitado es correcto" << endl;
	}catch(exception ex){
		//codigo a ejecutar en caso de falla
		cout << "El numero digitado no es valido." << endl;
	}
	
	cout << "Fin del programa";
		
	return 345;
}
