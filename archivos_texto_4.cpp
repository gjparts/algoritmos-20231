#include<iostream>
#include<fstream>

using namespace std;

int main(){
	fstream archivo;
	
	//abrir el archivo en modo Append (escribir sin borrar lo que ya esta)
	//archivo.open("salida.txt", ios::app);

	//abrir el archivo en modo Output (sobreescribir el archivo perdiendo lo que ya estaba)
	archivo.open("salida.txt", ios::out);
	
	if( archivo.is_open() )
	{
		archivo << "Este es un renglon" << endl;
		
		//IMPORTANTE! cerrar el archivo
		archivo.close();
	}
	else
		cout << "No fue posible abrir el archivo para escribir" << endl;
	
	return 123;
}


