#include "Edificio.h"
#include <iostream>
//#include "Parqueo.h"

using namespace std;

Edificio::Edificio(int cPersonas2, int pPisos){
	cPersonas = cPersonas2;
	pisos = pPisos;
	crearParqueo();
}

Edificio::Edificio(){
	cPersonas = 10;
	pisos = 10;
}

int Edificio::getPersonas(){
	return cPersonas;	
}

int Edificio::getPisos(){
	return pisos;	
}

void Edificio::crearParqueo(){
	int alturaMax = 0;
	int pPisos = 0;
	//int pPersonas = 0;
	
	//altura max
	do{
		cout <<"Ingrese la altura max del parqueo: " << endl;
		cin >> alturaMax;
	}while(alturaMax <= 0);

	//pisos
	do{
		cout << "Ingrese la cantidad de pisos del parqueo: ";
		cin >> pPisos;
	}while(pPisos <= 0);
	
	parqueo = Parqueo(alturaMax, pPisos, cPersonas);	
	

}

Parqueo Edificio::getParqueo(){
	return parqueo;
}



//destructor
Edificio::~Edificio(){
	cout << "Se ha liberado la memoria";
}

