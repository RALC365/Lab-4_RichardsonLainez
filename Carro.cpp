#include "Carro.h"
#include <iostream>
#include <iostream>

using namespace std;

Carro::Carro(string pColor, string pMarca, int pAltura){
	this->color = pColor;
	this->marca = pMarca;
	this->altura = pAltura;
}

Carro::Carro(){
	this->color = "Azul";
	this->marca = "Honda";
	this->altura = 21;
}

//destructor

Carro::~Carro(){

}