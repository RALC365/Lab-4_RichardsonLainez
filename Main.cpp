#include <iostream>
#include <string>
//#include <vector>
//#include "Carro.h"
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
	cout << "Ingrese la cantidad del personas por piso del edificio"<< endl;
	do{
		cin >> cPersonas;
		if(cPersonas < 50 || cPersonas > 200){
			cout<< "Debe de estar entre 50-200" << endl;
		}
	}while(cPersonas < 50 || cPersonas >200 );

	//validacion de pisos
	cout << "Ingrese la cantidad de pisos del edificio"<< endl;
	do{
		cin >> cPisos;
	}while(cPisos <= 0);
	
	Edificio edificio =  Edificio(cPersonas, cPisos);

	int opcion = 0;
 	opcion = menu();

	switch(opcion){
		case 1:
			edificio.getParqueo().anadirCarro();
			break;

		case 2:
			edificio.getParqueo().eliminarCarro();
			break;

		case 3:
			edificio.getParqueo().analizarParqueo();
			break;

		case 4: 
			cout << "¡Que tenga un excelent dia!" << endl;
			break;


	}



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











