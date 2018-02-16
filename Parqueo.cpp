#include "Parqueo.h"
#include <iostream>
#include "Carro.h"

using namespace std;

Parqueo::Parqueo(int pAlturaMax, int pPisos, int pPersonas){
	alturaMax = pAlturaMax;
	pisos = pPisos;
	personas = pPersonas;
	n = (personas)/10;
	if(n < 12){
		m = (n) * 0.7;
	}else{
		m = (n) * 0.4;
	}
	
	crearMatriz();		
}

Parqueo::Parqueo(){
	alturaMax = 5;
	pisos = 5;
	personas = 10;
}

void Parqueo::crearMatriz(){
	this->parqueoTD = new Carro***[pisos];
	for(int i = 0; i < pisos; i++){
		parqueoTD[i] = new Carro**[n];
		for(int j = 0; j < n; j++){
			parqueoTD[i][j] = new Carro*[m];
			for(int k = 0; k < m ; k++){
				this->parqueoTD[i][j][k] = NULL;
			}
		}
	}

}

/*void Parqueo::actualizarValores(){
	this-> n = (this->personas)/10;
	if(n < 12){
		this -> m = (this-> n) * 0.7;
	}else{
		this-> m = (this -> n) * 0.4;
	}
}*/


//destructor
Parqueo::~Parqueo(){
}
