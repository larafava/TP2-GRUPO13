#pragma once
#include <string>
#include "Avion.h"
#include "cFecha.h"
#include "cListaPasajeros.h"

using namespace std;

class Vuelo {

	unsigned int numvuelo;
	string estado;
	Avion* avion;
	cListaPasajeros* Pasajeros;

	//Formato HH:MM
	//cFecha* HorarioAterrizaje;

	//Formato HH:MM
	//cFecha* HorarioArribo;


public:

#pragma region Contructores y destructores
	Vuelo(unsigned int _numvuelo, string _estado, string _avion);
	~Vuelo();

#pragma endregion

#pragma region Metodos
	string to_string();
	void ArribarPista(int HoraBajada, int MinutoBajada);
	void AgregarPasajero(Pasajero*c);
	void CambiarPasajero();
	void EliminarPasajero(Pasajero*c);
	int getPesoPasajero();
};
