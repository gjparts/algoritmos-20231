#include<iostream>
#include<fstream>

using namespace std;

int main(){
	fstream archivo;
	string linea;
	
	//abrir un archivo de texto
	/*
	//Linux (Ruta absoluta)
	archivo.open("/home/labsueest/Documentos/ejemplo_24mil.txt", ios::in );
	
	//Windows (Ruta absoluta)
	archivo.open("C:\\archivos\\ejemplo_24mil.txt", ios::in );
	*/
	//ruta relativa
	archivo.open("ejemplo_24mil.txt", ios::in );
	
	//comprobar si se logro abrir el archivo
	if( archivo.is_open() ){
		cout << "Archivo se pudo abrir" << endl;
		int n = 0;	//variable para contar las lineas
		while( !archivo.eof() )
		{
			n++;
			//pasar a la siguiente linea
			getline(archivo,linea);
			cout << linea << endl;
		}
		cout << "Se ha terminado de leer el archivo" << endl;
		cout << "Se leyeron " << n << " lineas" << endl;
	}
	else{
		cout << "Archivo no se pudo abrir, no existe o no tiene permisos." << endl;
	}
	
	return 567;
}
