temp: Main.o Parqueo.o Edificio.o Carro.o
	g++ Main.o Parqueo.o Carro.o -o "temp"

Main.o: Main.cpp Parqueo.h Edificio.h Carro.h
	g++ -c Main.cpp

Parqueo.o: Parqueo.h Parqueo.cpp Carro.h 
	g++ -c Parqueo.cpp

Edificio.o: Edificio.h Edificio.cpp Parqueo.h
	g++ -c Edificio.cpp

Carro.o: Carro.h Carro.cpp 
	g++ -c Carro.cpp
