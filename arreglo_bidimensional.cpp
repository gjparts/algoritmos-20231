#include<iostream>

using namespace std;

//prototipos de funciones (encabezados o firmas de funcion)
void imprimeArregloComoTabla(int arreglo[][3], int filas);

//funcion main
int main(){
	//Arreglos Bidimensionales
	//Forma 1: solo inicializar y despues llenar
	int tabla1[4][3];
	tabla1[0][0] = 2;	tabla1[0][1] = 8;	tabla1[0][2] = 14;
	tabla1[1][0] = 4;	tabla1[1][1] = 5;	tabla1[1][2] = 100;
	tabla1[2][0] = 8;	tabla1[2][1] = 3;	tabla1[2][2] = 5;
	tabla1[3][0] = 7;	tabla1[3][1] = 8;	tabla1[3][2] = 500;
	//imprimir el contenido de un arreglo bidimensional (descripcion de fila, columna)
	for( int i = 0; i < 4; i++ )
	{
		for( int j = 0; j < 3; j++ )
		{
			cout << "Fila " << i << ", Columna " << j << ", valor: " << tabla1[i][j] << endl;
		}
	}
	
	//imprimir el contenido del arreglo bidimensional como tabla
	cout << "********** Tabla1 **********" << endl;
	for( int i = 0; i < 4; i++ )
	{
		for( int j = 0; j < 3; j++ )
		{
			cout << tabla1[i][j] << "\t";
		}
		//nueva fila
		cout << endl;
	}
	
	//forma 2: inicializar directamente usando llaves
	int tabla2[][3] = {
		{4,5,6},
		{40,50,60},
		{1,2,3},
		{10,20,30}
	};
	//medir numerode filas
	int filas = end(tabla2)-begin(tabla2);
	imprimeArregloComoTabla(tabla2,filas);
	
	filas = end(tabla1)-begin(tabla1);
	imprimeArregloComoTabla(tabla1,filas);
	
	
	return 14567;
} //aqui se termina el main

//implementacion de funciones
void imprimeArregloComoTabla(int arreglo[][3], int filas){
	cout << "******************************" << endl;
	for( int i = 0; i < filas; i++ )
	{
		for( int j = 0; j < 3; j++ )
		{
			cout << arreglo[i][j] << "\t";
		}
		//nueva fila
		cout << endl;
	}
}






