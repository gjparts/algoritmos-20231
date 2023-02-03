#include<iostream>
#include <windows.h> 

using namespace std;

int main(){
	//colorear texto en c++
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	SetConsoleTextAttribute(hConsole, 9);
	cout << "Texto de un color" << endl;

	SetConsoleTextAttribute(hConsole, 11);
	cout << "Texto de otro color" << endl;
	
	SetConsoleTextAttribute(hConsole, 14);
	cout << "Texto de otro color" << endl;

	SetConsoleTextAttribute(hConsole, 15);
	cout << "Texto de otro color" << endl;

	return 567;
}

