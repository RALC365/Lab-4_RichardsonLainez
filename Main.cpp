#include <iostream>
#include <string>
#include <vector>
#include "Carro.h"
#include "Edificio.h"
#include "Parqueo.h"

using namespace std;


int menu();

int main(){
	int cPersonas = 0;
	int cPisos = 0;
	//Parqueo parqueo = NULL;	
	cout<< "¡Bienvenido!"<< endl;
	cout<< "Ahora crearemos un edificio" << endl;
	//validacion de personas	
	cout << "Ingrese la cantidad del personas por piso"<< endl;
	do{
		cin >> cPersonas;
	}while(cPersonas < 50 || cPersonas >200 );

	//validacion de pisos
	cout << "Ingrese la cantidad del personas por piso"<< endl;
	do{
		cin >> cPisos;
	}while(cPisos <= 0);
	
	Edificio edificio =  Edificio(cPersonas, cPisos);

	int opcion = 0;
 	opcion = menu();





	return 0;
}

int menu(){
	cout << "Menu:"<< endl;
	cout << "1.-Parquear carro"<< endl;
	cout << "2.-Quitar un carro del parqueo"<< endl;
	cout << "3.-Análisis de parqueo"<< endl;
	cout << "4.-Salir"<< endl;
	int resp = 0;
	do{
		cin >> resp;
	}while(resp <1 || resp >4);
	
	return resp;
}











