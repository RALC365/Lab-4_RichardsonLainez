#include <string>

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
		int alturaMax;
		int pisos;
		int personas;	
	//destructor
		~Parqueo();
};

#endif
