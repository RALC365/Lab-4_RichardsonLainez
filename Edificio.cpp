#include "Edificio.h"
#include <iostream>

using namespace std;

Edificio::Edificio(int cPersonas2, pPisos){
	this->cPersonas = cPersonas2;
	this->pisos = pPisos;
}

Edificio::Edificio(){
	this->cPersonas = 10;
	this->pisos = 10;
}

Edificio::getPersonas(){
	return this->cPersonas;	
}

Edificio::getPisos(){
	return this->pisos;	
}


//destructor
Edificio::~Edificio(){
}

