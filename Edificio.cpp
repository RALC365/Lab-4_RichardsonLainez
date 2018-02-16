#include "Edificio.h"
#include <iostream>
#include "Parqueo.h"

using namespace std;

Edificio::Edificio(int cPersonas2, int pPisos){
	cPersonas = cPersonas2;
	pisos = pPisos;
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
		cout <<"Ingrese la altura max: " << endl;
		cin >> alturaMax;
	}while(alturaMax <= 0);

	//pisos
	do{
		cout << "Ingrese la cantidad de pisos: ";
		cin >> pPisos;
	}while(pPisos <= 0);
	
	parqueo = Parqueo(alturaMax, pPisos, cPersonas);	
	

}


//destructor
Edificio::~Edificio(){
}

