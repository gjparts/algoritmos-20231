#include<iostream>

using namespace std;

//prototipos de funciones
void opcion1();	//esta funcion es para agregar entrada al diario
void opcion2(); //esta funcion es para mostrar todo el diario
void opcion3(); //esta funcion es para mostrar el diario a partir de cierta linea

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
		
		switch( opcion )
		{
			case 1:
				opcion1();
			break;
			case 2:
				opcion2();
			break;
			case 3:
				opcion3();
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
	cout << "ha seleccionado la opcion 1" << endl;
}

void opcion2(){
	cout << "ha seleccionado la opcion 2" << endl;
}

void opcion3(){
	cout << "ha seleccionado la opcion 3" << endl;
}

