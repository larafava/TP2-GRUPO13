#pragma once
#include <string>
#include <iostream>
#include "cListavuelo.h"
#include "cListaAvionesaeropuerto.h"

using namespace std;

class Aeropuerto {
	unsigned int  ID; 
	unsigned int capacidadaeropuerto;
	unsigned int capacidadmax;
	cListavuelo* Listavuelo;
	cListaAvionesAeropuerto* Hangar;
	cListaAvionesAeropuerto* despegueyaterrizaje;

	static int cont;
public:
#pragma region Constructores y destructores
	Aeropuerto(unsigned int _ID, unsigned int _capacidadaeropuerto, unsigned int _capacidadmax);
	Aeropuerto();

	~Aeropuerto();


	void DarPermiso();
	string to_string();
	static int getCont();
	static void setCont(int aux);
	void VerificarCondiciones(cAvion*c);
	void aterrizar(cAvion *avion);
	void despegar(cAvion * avion);
	int calcularPasajerosDia(cFecha * dia);
};