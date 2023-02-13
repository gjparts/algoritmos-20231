#include<iostream>
#include<fstream>

using namespace std;

int main(){
	/*Hacer un programa que lea un archivo y sume todos los numeros encontrados en él
	y al finalizar imprima dicha suma*/
	fstream archivo;
	string linea;	//variable para almacenar la linea leida
	int suma = 0;	//variable acumuladora
	
	archivo.open( "ejemplo_24mil.txt", ios::in );
	
	if( archivo.is_open() )
	{
		while( !archivo.eof() )
		{
			getline(archivo,linea);	//leer cada linea en el archivo
			
			//convertir el string a entero, si falla entonces no lo sumamos
			try{
				suma = suma + stoi(linea);
			}catch(exception ex){
				//ignorar en caso de error
			}
			
		}
		cout << "La suma de los numeros encontrados en el archivo es " << suma << endl;
	}
	else
		cout << "Archivo no existe o faltan permisos para abrirlo." << endl;
	
	return 456;
}
