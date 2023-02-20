#include<iostream>
#include<fstream>

using namespace std;

//prototipos de funciones
void opcion1();	//esta funcion es para agregar entrada al diario
void imprimirDiario(int lineaDesde);	//imprime el diario a partir de determinada linea

int main(){
	/*Hacer un programa que muestre un menu:
	DIARIO
	1) Agregar entrada al diario
	2) Mostrar todo el diario
	3) Mostrar todo el diario a partir de X renglon
	4) Salir
	
	* el menu se volverá a mostrar hasta que el usuario seleccione la opcion de salir
	* en la opcion 1:	  la entrada se escribirá al final del diario*/
	int opcion = 0;
	
	while( opcion != 4 )
	{
		system("cls");	//limpiar la pantalla
		cout << "******** DIARIO ********" << endl;
		cout << "1) Agregar entrada al diario" << endl;
		cout << "2) Mostrar todo el diario" << endl;
		cout << "3) Mostrar todo el diario a partir de X renglon" << endl;
		cout << "4) Salir" << endl;
		cout << "Digitar el numero de opcion deseado: ";
		cin >> opcion;
		
		int numeroLinea;
		
		switch( opcion )
		{
			case 1:
				opcion1();
			break;
			case 2:
				imprimirDiario(1);	//imprime el diario desde la linea 1
			break;
			case 3:
				cout << "Digitar el numero de renglon: ";
				cin >> numeroLinea;
				imprimirDiario(numeroLinea);
			break;
			case 4:
				cout << "Adios!" << endl;
			break;
			default:
				cout << "Opcion no valida" << endl;
		}
		system("pause");
	}	
	
	return 876;
}

//implementacion de los prototipos de funciones
void opcion1(){
	cout << "Agregar entrada al Diario **********************" << endl;
	string nueva;
	cout << "Digitar cadena de texto: ";
	//cuando cin viene de leer un numero y se desea leer una cadena
	//se recomienda hacerle flush al cin
	cin.ignore();
	getline(cin,nueva);
	
	fstream archivo;
	archivo.open("bitacora.txt",ios::app);
	
	if( archivo.is_open() ){
		archivo << nueva << endl;	//escribir nueva linea en el archivo
		archivo.close();			//cerrar el archivo
	}
	else
		cout << "No se pudo abrir el archivo para su escritura.";
}

void imprimirDiario(int lineaDesde){
	if( lineaDesde <= 1 )
		cout << "Imprimir todo el diario *************************";
	else
		cout << "Mostrar el diario desde la linea " << lineaDesde << "*************************";
	cout << endl;
	
	fstream archivo;
	string linea;
	
	archivo.open("bitacora.txt",ios::in);
	if( archivo.is_open() ){
		int n = 1;	//variable para imprimir el numero de linea
		while( !archivo.eof() ){
			getline(archivo,linea);
			
			if( n >= lineaDesde )
				cout << n << "\t" << linea << endl;
			
			n++;
		}
	}
	else
		cout << "Archivo no existe o no es accesible" << endl;
}
