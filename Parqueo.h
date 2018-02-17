#include <string>
#include "Carro.h"

using namespace std;

#ifndef PARQUEO_H
#define  PARQUEO_H

class Parqueo{
	//atributos o metodos privados
	private:
		
	//metodos publicos
	public:
		Parqueo();
		//altura, pisos(z), x
		Parqueo(int,int, int);
		void crearMatriz();
		void actualizarValores();
		void analizarParqueo();
		void eliminarCarro();
		Carro**** getMatriz();
		void anadirCarro();
		int alturaMax;
		int pisos;
		int personas;	
		int m;
		int n;
		Carro**** parqueoTD;	

	//destructor
		~Parqueo();
};

#endif
