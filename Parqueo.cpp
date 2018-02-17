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

void Parqueo::anadirCarro(){
	int alturaC = 0;
	string colorC = "";
	string marcaC = "";
	do{
		cout << "Ingrese la altura del carro: "<< endl;
		cin >> alturaC;
		if(alturaC > alturaMax){
			cout<< "Es muy alto el carro, ingrese otra altura"
			<< endl;
		}
	}while(alturaC<0 || alturaC > alturaMax);

	cout << "ingrese el color"<< endl;
	cin >> colorC;

	cout << "ingrese la marca" << endl;
	cin >> marcaC;

	//Carro temp = Carro(colorC, marcaC, alturaC);

	int pisoElg = 0;
	do{
		cout<< "Ingrese el piso en que estacionara el carro:"
			<< endl;
		cin >> pisoElg;
	}while(pisoElg < 0 || pisoElg > pisos);
	
	for(int i = 0; i < pisos; i++){
		for(int j = 0; j < n; j++){
			if(this->parqueoTD[pisoElg][i][j] == NULL){
				this->parqueoTD[pisoElg][i][j] = new Carro(colorC, marcaC, alturaC);
				cout<<"Se ha estacionado el auto"<< endl;
				//i = pisos;
				//j = n;
				break;
		
			}
		}
	}
	
}


void Parqueo::eliminarCarro(){
	int pisoEl = 0;
	int filEl = 0;
	int colEl = 0;

	cout<< "A continuacion ingresara las coordenas a eliminar"<< endl;
	do{
		cout << "Ingrese el piso" << endl;
		cin >> pisoEl;
	}while(pisoEl <0 || pisoEl >= pisos);

	do{
		cout<< "Ingrese la fila"<<endl;
		cin >> filEl;
	}while(filEl < 0 || filEl >= n);

	do{
		cout<< "Ingrese la columna"<< endl;
		cin >> colEl;
	}while(colEl <0 || colEl >= m);

	if(this->parqueoTD[pisoEl][filEl][colEl] != NULL){
		this->parqueoTD[pisoEl][filEl][colEl] = NULL;
		cout<< "Se ha quitado el carro del parqueo" << endl;
	}else{
		cout<< "No hay carros en ese lote"<< endl;
	}
}

void Parqueo::analizarParqueo(){
	int disponibles = 0;
	int ocupados = 0;

	for(int i = 0; i < pisos; i++){
		for(int j = 0; j <this-> n; j++){
			for(int k = 0; k <this-> m; k++){
				if(this-> parqueoTD[i][j][k] != NULL){
					ocupados++;
				}else{
					disponibles++;
				}
			}
		}
	}	
	cout << "Lotes vacios: " << disponibles << endl;
	cout << "Lotes ocupados: " << ocupados << endl;
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


Carro**** Parqueo::getMatriz(){
	return this->parqueoTD;
}

//destructor
Parqueo::~Parqueo(){
	for(int i = 0; i != pisos; i++){
		for(int j = 0; j != n; j++){
			for(int k = 0; k != m; k++){
				this->parqueoTD[i][j][k] = NULL;
				delete this->parqueoTD[i][j][k];
			}
			delete[] this-> parqueoTD[i][j];
		}
		delete[] this->parqueoTD[i];
	}
	delete[] this->parqueoTD;

}


