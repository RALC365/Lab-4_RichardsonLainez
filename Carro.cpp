#include "Carro.h"
#include <iostream>

using namespace std;

Carro::Carro(string pColor, string pMarca, int pAltura){
	color = pColor;
	marca = pMarca;
	altura = pAltura;
}

Carro::Carro(){
	color = "Azul";
	marca = "Honda";
	altura = 21;
}

//destructor

Carro::~Carro(){

}
