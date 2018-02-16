#include <iostream>
#include "Parqueo.cpp"

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
		
		int getPersonas();
		int getPisos();
		int cPersonas;
		int pisos;
		Parqueo parqueo;	
		
		//destructor
		~Edificio();
};

#endif
