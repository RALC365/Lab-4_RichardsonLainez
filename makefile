main: Main.o Parqueo.o
	g++ Main.o Parqueo.o -o "Ejecutable"

Main.o: Main.cpp
	g++ -c main.cpp

Parqueo.o: Parqueo.cpp Parqueo.h
	g++ -c Parqueo.cpp

Edificio.o: Edificio.cpp Edificio.h
	g++ -c Edificio.cpp

Carro.o: Carro.cpp Carro.h 
	g++ -c Carro.cpp
