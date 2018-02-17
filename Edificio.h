#include <iostream>
#include "Parqueo.h"

#ifndef EDIFICIO_H
#define EDIFICIO_H

class Edificio{
	//atributos o metodos privados
	private:
		
	//metodos publicos
	public:
		Edificio();
		//cPersonas, pisos
		Edificio(int, int);
		void  crearParqueo();
		Parqueo getParqueo();		
		int getPersonas();
		int getPisos();
		int cPersonas;
		int pisos;
		Parqueo parqueo;	
		
		//destructor
		~Edificio();
};

#endif
