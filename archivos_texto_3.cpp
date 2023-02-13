#include<iostream>
#include<fstream>

using namespace std;

int main(){
	/*Hacer un programa que lea un archivo de texto, al terminar 
	que imprima la suma de todos los numeros PARES encontrados en el.
	Tambien deberá imprimir el total de lineas procesadas.
	Tambien deberá imprimir la cantidad de numeros pares encontrados en dicho archivo.
	
	Si el archivo no existe o no es accesible entonces mostrar un mensaje de error indicandolo.*/
	fstream archivo;
	string linea;	//variable para almacenar la linea leida
	int sumaPares = 0, contadorPares = 0, contadorLineas = 0;	//acumuladores
	
	archivo.open( "ejemplo_24mil.txt", ios::in );
	
	if( archivo.is_open() )
	{
		while( !archivo.eof() )
		{
			getline(archivo,linea);	//leer cada linea en el archivo
			contadorLineas++;  //contadorLineas = contadorLineas + 1;
			try{
				//codigo propenso a fallar
				if( stoi(linea)%2 == 0 )
				{
					//es par
					sumaPares += stoi(linea); //sumaPares = sumaPares + stoi(linea);
					contadorPares++;	//contadorPares = contadorPares + 1;
				}
			}catch(exception ex){
				//no hacer nada
			}
		}
		cout << "Suma de numeros pares: " << sumaPares << endl;
		cout << "Cantidad de numeros pares: " << contadorPares << endl;
		cout << "Cantidad de lineas procesadas: " << contadorLineas << endl;
	}
	else
		cout << "Archivo no existe o faltan permisos para abrirlo." << endl;
	
	return 456;
}
